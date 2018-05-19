#define dataPin 10
#define latchPin 8
#define clockPin 9
int binary[] = { 1,2,4,8,16,32,64,128 };			// LED����_��
int left_light = 900;				//��������ж�����
int right_light = 710;				//�����ҽ��ж�����
int hand_light = 850;				//���������ж�����
int up_or_down;						//���� �ж��������Ҫ���еĲ���������
int score = 0;						//���� ��ҷ���(Ҳ���� �ؿ���-1)
int flag = 1;						//���� �ж���Ϸ�Ƿ�ʼ   ��ʼΪ2  δ��ʼΪ1
int speed = 100;					//���� ����ǰ���ٶ�
int best_score = 0;					//������߼�¼


//�������ӵ�ͼ��
byte one[8] =
{
	 B00011000 ,
	 B00011000 ,
	 B00000000 ,
	 B00000000 ,
	 B00000000 ,
	 B00000000 ,
	 B00000000 ,
	 B00000000 
};

byte two[8] =
{
	B00111100 ,
	B00111100 ,
	B00111100 ,
	B00111100 ,
	B00000000 ,
	B00000000 ,
	B00000000 ,
	B00000000
};

byte three[8] =
{
	B01111110 ,
	B01111110 ,
	B01111110 ,
	B01111110 ,
	B00111100 ,
	B00000000 ,
	B00000000 ,
	B00000000
};

byte four[8] =
{
	B11111111 ,
	B11111111 ,
	B11111111 ,
	B11111111 ,
	B01111110 ,
	B00000000 ,
	B00000000 ,
	B00000000
};

byte blank[8] =		//����һ�����Ը��ĵİװ�ͼ��
{
	B00000000 ,
	B00000000 ,
	B00000000 ,
	B00000000 ,
	B00000000 ,
	B00000000 ,
	B00000000 ,
	B00000000
};

byte wrong[8] =		//���塰����ͼ��
{
	B11000011,
	B11100111,
	B01111110,
	B00101100,
	B00110100,
	B01111110,
	B11100111,
	B11000011
};

byte go[8] =		//����"go"ͼ��
{
	B0000000,
B11110111,
B10010101,
B10000101,
B10110101,
B10010101,
B11110111,
B00000000
};

//��������ͼ����1234567890��
byte num1[8] =
{
	B00111000,
	B00111000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00011000,
	B00111100
};

byte num2[8] =
{
	B01111110,
	B01111110,
	B00000110,
	B00000110,
	B00011000,
	B01100000,
	B01111110,
	B01111110
};

byte num3[8] =
{
B01111110,
B01111110,
B00000110,
B01111110,
B01111110,
B00000110,
B01111110,
B01111110
};

byte num4[8] =
{
B00011100,
B00111100,
B00101100,
B01101100,
B01111110,
B01111110,
B00001100,
B00001100
};

byte num5[8] =
{
B01111110,
B01100000,
B01100000,
B01111100,
B00000110,
B00000110,
B00000110,
B01111100
};

byte num6[8] =
{
B01111110,
B01100110,
B01100110,
B01100000,
B01111110,
B01100110,
B01100110,
B01111110
};

byte num7[8] =
{
B01111110,
B01100110,
B00000110,
B00001100,
B00001100,
B00011000,
B00011000,
B00110000
};

byte num8[8] =
{
B01111110,
B01100110,
B01100110,
B01111110,
B01111110,
B01100110,
B01100110,
B01111110
};

byte num9[8] =
{
B01111110,
B01100110,
B01100110,
B01111110,
B00000110,
B01100110,
B01100110,
B01111110
};

byte num0[8] =
{
B01111110,
B01100110,
B01100110,
B01100110,
B01100110,
B01100110,
B01100110,
B01111110
};


void setup()
{
	pinMode(dataPin, OUTPUT);
	pinMode(latchPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	//Serial.begin(9600);
	light_adapt();		//���Ի�������
}

void loop()
{
	int left = analogRead(A1);
	int right = analogRead(A0);
	//Serial.print("left=");
	//Serial.println(left);
	//Serial.print("right=");
	//Serial.println(right);

	if (left >= left_light || right >= right_light)			//���ֻҪ��һֻ���ڵ����Ͼͱ�ʾ��Ϸ����
	{
		if (flag == 1)		//��Ϸ��ʼ������ֻ����һ��
		{
			game_start();
		}

		the_game_difficulty(score);
		up_or_down = RandomBoxComing();
		left = analogRead(A1);
		right = analogRead(A0);
		whatShouldPlayerDo(left, right);
		if (score == 440)
		{
			game_end();		//��ʵ��ʤ��
		}
	}
	else if (score != 0)
	{
		game_end();
	}
}


int RandomBoxComing()      //�����������
{
	int a = random(0, 100);
	if (a % 2 == 0)				//���ɴ��Ϸ����ķ���
	{
		for (int i = 0; i < speed; i++)
		{
			display(one);
		}
		for (int i = 0; i < speed; i++)
		{
			display(two);
		}
		for (int i = 0; i < speed; i++)
		{
			display(three);
		}
		for (int i = 0; i < speed; i++)
		{
			display(four);
		}
	}
	else//���ɴ��·����ķ���
	{
		for (int i = 0; i < speed; i++)
		{
			for (int i = 0; i<8; i++)
			{
				digitalWrite(latchPin, LOW);
				shiftOut(dataPin, clockPin, MSBFIRST, one[7 - i]);
				shiftOut(dataPin, clockPin, MSBFIRST, ~binary[i]);
				digitalWrite(latchPin, HIGH);
				delay(1);
			}
		}
		for (int i = 0; i < speed; i++)
		{
			for (int i = 0; i<8; i++)
			{
				digitalWrite(latchPin, LOW);
				shiftOut(dataPin, clockPin, MSBFIRST, two[7 - i]);
				shiftOut(dataPin, clockPin, MSBFIRST, ~binary[i]);
				digitalWrite(latchPin, HIGH);
				delay(1);
			}
		}
		for (int i = 0; i < speed; i++)
		{
			for (int i = 0; i<8; i++)
			{
				digitalWrite(latchPin, LOW);
				shiftOut(dataPin, clockPin, MSBFIRST, three[7 - i]);
				shiftOut(dataPin, clockPin, MSBFIRST, ~binary[i]);
				digitalWrite(latchPin, HIGH);
				delay(1);
			}
		}
		for (int i = 0; i < speed; i++)
		{
			for (int i = 0; i<8; i++)
			{
				digitalWrite(latchPin, LOW);
				shiftOut(dataPin, clockPin, MSBFIRST, four[7 - i]);
				shiftOut(dataPin, clockPin, MSBFIRST, ~binary[i]);
				digitalWrite(latchPin, HIGH);
				delay(1);
			}
		}
	}
	return a;
}

void whatShouldPlayerDo(int left, int right)        //��Ҽ��ܣ��������£�
{
	if (up_or_down % 2 == 0)     //Ӧ����
	{
		//Serial.println(left);
		//Serial.println(right);
		if (left >= left_light && right >= hand_light)
		{
			score++;			//������һ
		}
		else//��Ϸ����
		{
			game_end();
		}
	}
	else        //Ӧ����
	{
		//Serial.println(left);
		//Serial.println(right);
		if (left <= left_light && right <= right_light)
		{
			score++;			//������һ
			delay(700);			//�ȴ������������
		}
		else//��Ϸ����
		{
			game_end();
		}
	}
}

void display(byte dat[8])		//��ʾģ��
{
	for (int i = 0; i<8; i++)
	{
		digitalWrite(latchPin, LOW);
		shiftOut(dataPin, clockPin, MSBFIRST, dat[i]);
		shiftOut(dataPin, clockPin, MSBFIRST, ~binary[i]);
		digitalWrite(latchPin, HIGH);
		delay(1);
	}
}

void game_start()					//��Ϸ��ʼ����
{
	//������Ч����
	for (int i = 0; i < 24; i++)
	{
		if (i < 8)
		{
			blank[i] = B11111111;
		}
		else if (i > 5 && i < 16)
		{
			blank[i - 8] = B00000000;
		}
		else if (i > 15)
		{
			blank[i - 16] = B11111111;
		}
		for (int k = 0; k < 7; k++)
		{
			display(blank);
		}
	}
	for (int k = 0; k < 50; k++)
	{
		display(blank);
	}
	for (int i = 0; i < 4; i++)
	{
		blank[i + 4] = B00000000;
		blank[3 - i] = B00000000;
		for (int k = 0; k < 10; k++)
		{
			display(blank);
		}
	}
	delay(500);
	//321��go
	for (int i = 0; i < 100; i++)
	{
		display(num3);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		display(num2);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		display(num1);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		display(go);
	}
	delay(300);
	flag = 2;
}

void game_end()				//��Ϸ���������������ʾ����
{
	if (score == 440)
	{
		//����Ч��
		for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < 5; i++)
			{
				for (int i = 0; i < 8; i++)		//��ʼ��blank����
				{
					blank[i] = B00000000;
				}
				switch (i)
				{
				case 0:
					blank[3] = B00011000;
					blank[4] = B00011000;
					break;
				case 1:
					blank[2] = B00111100;
					blank[3] = B00111100;
					blank[4] = B00111100;
					blank[5] = B00111100;
					break;
				case 2:
					blank[1] = B01111110;
					blank[2] = B01111110;
					blank[3] = B01100110;
					blank[4] = B01100110;
					blank[5] = B01111110;
					blank[6] = B01111110;
					break;
				case 3:
					blank[0] = B11111111;
					blank[1] = B11111111;
					blank[2] = B11000011;
					blank[3] = B11000011;
					blank[4] = B11000011;
					blank[5] = B11000011;
					blank[6] = B11111111;
					blank[0] = B11111111;
					break;
				case 4:
					blank[0] = B11111111;
					blank[1] = B10000001;
					blank[2] = B10000001;
					blank[3] = B10000001;
					blank[4] = B10000001;
					blank[5] = B10000001;
					blank[6] = B10000001;
					blank[0] = B11111111;
				}

				for (int k = 0; k < 15; k++)
				{
					display(blank);
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < 80; i++)
		{
			display(wrong);
		}
		delay(500);
	}

	//��ַ�����max = 440����ÿһλ��ֵ  ����ʾ����
	int a[3];
	int b = score;
	for (int i = 0; i < 3; i++)
	{
		a[i] = b % 10;
		b = (b - b % 10) / 10;
	}

	bestScore();				//�ж��Ƿ�����¼�¼

	for (int i = 0; i < 3; i++)
	{
		switch (a[2 - i])
		{
		case 1:
			for (int i = 0; i < 150; i++)
			{
				display(num1);
			}
			break;
		case 2:
			for (int i = 0; i < 150; i++)
			{
				display(num2);
			}
			break;
		case 3:
			for (int i = 0; i < 150; i++)
			{
				display(num3);
			}
			break;
		case 4:
			for (int i = 0; i <150; i++)
			{
				display(num4);
			}
			break;
		case 5:
			for (int i = 0; i < 150; i++)
			{
				display(num5);
			}
			break;
		case 6:
			for (int i = 0; i < 150; i++)
			{
				display(num6);
			}
			break;
		case 7:
			for (int i = 0; i < 150; i++)
			{
				display(num7);
			}
			break;
		case 8:
			for (int i = 0; i < 150; i++)
			{
				display(num8);
			}
			break;
		case 9:
			for (int i = 0; i < 150; i++)
			{
				display(num9);
			}
			break;
		case 0:
			for (int i = 0; i < 150; i++)
			{
				display(num0);
			}
			break;
		}
		delay(300);
	}
	
	flag = 1;			//������Ϸ����
	score = 0;
}

void level_pass()			//�ؿ�ͨ�ض���
{
	for (int i = 0; i < 8; i++)		//��ʼ��blank����
	{
			blank[i] = B00000000;
	}

	//����Ч��
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int i = 0; i < 8; i++)		//��ʼ��blank����
			{
				blank[i] = B00000000;
			}
			switch (i)
			{
			case 0:
				blank[3] = B00011000;
				blank[4] = B00011000;
				break;
			case 1:
				blank[2] = B00111100;
				blank[3] = B00111100;
				blank[4] = B00111100;
				blank[5] = B00111100;
				break;
			case 2:
				blank[1] = B01111110;
				blank[2] = B01111110;
				blank[3] = B01100110;
				blank[4] = B01100110;
				blank[5] = B01111110;
				blank[6] = B01111110;
				break;
			case 3:
				blank[0] = B11111111;
				blank[1] = B11111111;
				blank[2] = B11000011;
				blank[3] = B11000011;
				blank[4] = B11000011;
				blank[5] = B11000011;
				blank[6] = B11111111;
				blank[0] = B11111111;
				break;
			case 4:
				blank[0] = B11111111;
				blank[1] = B10000001;
				blank[2] = B10000001;
				blank[3] = B10000001;
				blank[4] = B10000001;
				blank[5] = B10000001;
				blank[6] = B10000001;
				blank[0] = B11111111;
			}

			for (int k = 0; k < 15; k++)
			{
				display(blank);
			}
		}
	}

	delay(300);
	//321,go
	for (int i = 0; i < 100; i++)
	{
		display(num3);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		display(num2);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		display(num1);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		display(go);
	}
	delay(300);
}

void the_game_difficulty(int level)		//��Ϸ�Ѷȿ���
{
	switch (level)
	{
	case 8:
		level_pass();
		break;
	case 24:
		speed = 90;
		level_pass();
		break;
	case 48:
		speed = 80;
		level_pass();
		break;
	case 80:
		speed = 70;
		level_pass();
		break;
	case 120:
		speed = 60;
		level_pass();
		break;
	case 168:
		speed = 55;
		level_pass();
		break;
	case 224:
		speed = 50;
		level_pass();
		break;
	case 288:
		speed = 45;
		level_pass();
		break;
	case 360:
		speed = 40;
		level_pass();
		break;
	case 410:
		speed = 30;
		break;
	default:
		break;
	}
}

void light_adapt()			//������Ӧ�Ե���
{
	byte leftFoot[8] =	
	{
	B00000000,
	B01110000,
	B01110000,
	B01110000,
	B01100000,
	B01100000,
	B01100000,
	B00000000
	};
	byte rightFoot[8] =
	{
	B00000000,
	B00001110,
	B00001110,
	B00001110,
	B00000110,
	B00000110,
	B00000110,
	B00000000
	};
	byte hand[8] =
	{
	B00001000,
	B00011100,
	B00011110,
	B00011110,
	B01011110,
	B00111110,
	B00111110,
	B00011100
	};
	int up, down;
	int a, b;
	while (1)			//�����
	{
		a = analogRead(A1);
		delay(300);
		b = analogRead(A1);
		if (a - b > 60 || b - a > 60)
		{
			left_light = (a + b) / 2 + 10;
			//Serial.println(left_light);
			break;
		}
		for (int i = 0; i < 70; i++)
		{
			display(leftFoot);
		}
		delay(200);
	}
	while (1)			//���ҽ�
	{
		a = analogRead(A0);
		delay(300);
		b = analogRead(A0);
		if (a - b > 40 || b - a > 40)
		{
			right_light = (a + b) / 2 + 20;
			//Serial.println(right_light);
			break;
		}
		for (int i = 0; i < 70; i++)
		{
			display(rightFoot);
		}
		delay(200);
	}
	while (1)			//������
	{
		a = analogRead(A0);
		if (a - right_light > 110)
		{
			hand_light = a - 80;
			//Serial.println(hand_light);
			break;
		}
		for (int i = 0; i < 70; i++)
		{
			display(hand);
		}
		delay(500);
	}
	delay(500);
}

void bestScore()			//��߼�¼�Լ��Ƽ�¼����,��game_over�е���
{
	if (score > best_score)
	{
		best_score = score;
		
		//�¼�¼����
		byte arrow[8] =		//�����ͷͼ��
		{
		B00000000,
		B00000000,
		B00000000,
		B00011000,
		B00111100,
		B01100110,
		B11000011,
		B10000001
		};
		for (int k = 0; k < 30; k++)
		{
			for(int i = 0; i < 8; i++)
			{
				if (i < 7)
					{
						arrow[i] = arrow[i + 1];
					}
				else arrow[i] = arrow[0];
			}
			for (int k = 0; k < 5; k++)
			{
				display(arrow);
			}
			
		}
	}
}