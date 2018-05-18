int left_light = 900;				//��������ж�����
int right_light = 710;				//�����ҽ��ж�����
int hand_light = 850;				//���������ж�����
int R[] = { 2,3,4,5,10,11,12,13 };	//LED����_��
int C[] = { 6,7,8,9,A2,A3,A4,A5 };	//LED����_��
int up_or_down;						//���� �ж��������Ҫ���еĲ���������
int score = 0;						//���� ��ҷ���(Ҳ���� �ؿ���-1)
int flag = 1;						//���� �ж���Ϸ�Ƿ�ʼ   ��ʼΪ2  δ��ʼΪ1
int speed = 100;					//���� ����ǰ���ٶ�
int best_score = 0;					//������߼�¼


//�������ӵ�ͼ��
unsigned char one[8][8] =
{
	{ 0,0,0,1,1,0,0,0 },
	{ 0,0,0,1,1,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 }
};

unsigned char two[8][8] =
{
	{ 0,0,1,1,1,1,0,0 },
	{ 0,0,1,1,1,1,0,0 },
	{ 0,0,1,1,1,1,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 }
};

unsigned char three[8][8] =
{
	{ 0,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,0 },
	{ 0,0,1,1,1,1,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 }
};

unsigned char four[8][8] =
{
	{ 1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,1,1,1,1 },
	{ 0,1,1,1,1,1,1,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 }
};

unsigned char blank[8][8] =		//����һ�����Ը��ĵİװ�ͼ��
{
{ 0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0 }
};

unsigned char wrong[8][8] =		//���塰����ͼ��
{
{ 1,1,0,0,0,0,1,1 },
{ 1,1,1,0,0,1,1,1 },
{ 0,1,1,1,1,1,1,0 },
{ 0,0,1,0,1,1,0,0 },
{ 0,0,1,1,0,1,0,0 },
{ 0,1,1,1,1,1,1,0 },
{ 1,1,1,0,0,1,1,1 },
{ 1,1,0,0,0,0,1,1 }
};

unsigned char go[8][8] =		//����"go"ͼ��
{
	{ 0,0,0,0,0,0,0,0 },
{ 1,1,1,1,0,1,1,1 },
{ 1,0,0,1,0,1,0,1 },
{ 1,0,0,0,0,1,0,1 },
{ 1,0,1,1,0,1,0,1 },
{ 1,0,0,1,0,1,0,1 },
{ 1,1,1,1,0,1,1,1 },
{ 0,0,0,0,0,0,0,0 }
};

//��������ͼ����1234567890��
unsigned char num1[8][8] =
{
	{ 0,0,1,1,1,0,0,0 },
	{ 0,0,1,1,1,0,0,0 },
	{ 0,0,0,1,1,0,0,0 },
	{ 0,0,0,1,1,0,0,0 },
	{ 0,0,0,1,1,0,0,0 },
	{ 0,0,0,1,1,0,0,0 },
	{ 0,0,0,1,1,0,0,0 },
	{ 0,0,1,1,1,1,0,0 }
};

unsigned char num2[8][8] =
{
	{ 0,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,0 },
	{ 0,0,0,0,0,1,1,0 },
	{ 0,0,0,0,0,1,1,0 },
	{ 0,0,0,1,1,0,0,0 },
	{ 0,1,1,0,0,0,0,0 },
	{ 0,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,0 }
};

unsigned char num3[8][8] =
{
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,0,0,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,0,0,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,1,1,1,1,0 }
};

unsigned char num4[8][8] =
{
{ 0,0,0,1,1,1,0,0 },
{ 0,0,1,1,1,1,0,0 },
{ 0,0,1,0,1,1,0,0 },
{ 0,1,1,0,1,1,0,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,0,0,0,1,1,0,0 },
{ 0,0,0,0,1,1,0,0 }
};

unsigned char num5[8][8] =
{
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,0,0,0 },
{ 0,1,1,0,0,0,0,0 },
{ 0,1,1,1,1,1,0,0 },
{ 0,0,0,0,0,1,1,0 },
{ 0,0,0,0,0,1,1,0 },
{ 0,0,0,0,0,1,1,0 },
{ 0,1,1,1,1,1,0,0 }
};

unsigned char num6[8][8] =
{
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,0,0,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 }
};

unsigned char num7[8][8] =
{
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,0,0,0,0,1,1,0 },
{ 0,0,0,0,1,1,0,0 },
{ 0,0,0,0,1,1,0,0 },
{ 0,0,0,1,1,0,0,0 },
{ 0,0,0,1,1,0,0,0 },
{ 0,0,1,1,0,0,0,0 }
};

unsigned char num8[8][8] =
{
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 }
};

unsigned char num9[8][8] =
{
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 },
{ 0,0,0,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 }
};

unsigned char num0[8][8] =
{
{ 0,1,1,1,1,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,0,0,1,1,0 },
{ 0,1,1,1,1,1,1,0 }
};


void setup()
{
	//ѭ����������PIN Ϊ���ģʽ  
	for (int i = 0; i<8; i++)
	{
		pinMode(R[i], OUTPUT);
		pinMode(C[i], OUTPUT);
	}
	//Serial.begin(9600);
	light_adapt();		//���Ի�������
}

void loop()
{
	int left = analogRead(A0);
	int right = analogRead(A1);
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
		left = analogRead(A0);
		right = analogRead(A1);
		whatShouldPlayerDo(left, right);
		if (score == 440)
		{
			game_over();		//��ʵ��ʤ��
		}
	}
	else if (score != 0)
	{
		game_over();
	}
}


int RandomBoxComing()      //�����������
{
	int a = random(0, 100);
	if (a % 2 == 0)				//���ɴ��Ϸ����ķ���
	{
		for (int i = 0; i < speed; i++)
		{
			displayUp(one);
		}
		for (int i = 0; i < speed; i++)
		{
			displayUp(two);
		}
		for (int i = 0; i < speed; i++)
		{
			displayUp(three);
		}
		for (int i = 0; i < speed; i++)
		{
			displayUp(four);
		}
	}
	else//���ɴ��·����ķ���
	{
		for (int i = 0; i < speed; i++)
		{
			displayDown(one);
		}
		for (int i = 0; i < speed; i++)
		{
			displayDown(two);
		}
		for (int i = 0; i < speed; i++)
		{
			displayDown(three);
		}
		for (int i = 0; i < speed; i++)
		{
			displayDown(four);
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
			game_over();
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
			game_over();
		}
	}
}

void displayUp(unsigned char dat[8][8])   //��ʾ�Ϸ�����
{
	for (int c = 0; c<8; c++)
	{
		digitalWrite(C[c], LOW);//ѡͨ��c��  
		for (int r = 0; r<8; r++)
		{
			digitalWrite(R[r], dat[r][c]);
		}
		delay(1);
		Clear();  //�����ʾȥ������  
	}
}

void displayDown(unsigned char dat[8][8])   //��ʾ�·�����
{
	for (int c = 0; c<8; c++)
	{
		digitalWrite(C[c], LOW);//ѡͨ��c��  
		for (int r = 0; r<8; r++)
		{
			digitalWrite(R[r], dat[7 - r][c]);
		}
		delay(1);
		Clear();  //�����ʾȥ������  
	}
}

void Clear()                          //�����ʾ
{
	for (int i = 0; i<8; i++)
	{
		digitalWrite(R[i], LOW);
		digitalWrite(C[i], HIGH);
	}
}

void game_start()					//��Ϸ��ʼ����
{
	//������Ч����
	for (int i = 0; i < 24; i++)
	{
		if (i < 8)
		{
			for (int j = 0; j < 8; j++)
			{
				blank[i][j] = 1;
			}
		}
		else if (i > 5 && i < 16)
		{
			for (int j = 0; j < 8; j++)
				{
					blank[i - 8][j] = 0;
				}
		}
		else if (i > 15)
		{
			for (int j = 0; j < 8; j++)
				{
					blank[i - 16][j] = 1;
				}
		}
		for (int k = 0; k < 7; k++)
		{
			displayUp(blank);
		}
	}
	for (int k = 0; k < 50; k++)
	{
		displayUp(blank);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			blank[i + 4][j] = 0;
			blank[3 - i][j] = 0;
		}
		for (int k = 0; k < 10; k++)
		{
			displayUp(blank);
		}
	}
	delay(500);
	//321��go
	for (int i = 0; i < 100; i++)
			{
				displayUp(num3);
			}
	delay(300);
	for (int i = 0; i < 100; i++)
			{
				displayUp(num2);
			}
	delay(300);
	for (int i = 0; i < 100; i++)
			{
				displayUp(num1);
			}
	delay(300);
	for (int i = 0; i < 100; i++)
			{
				displayUp(go);
			}
	delay(300);
	flag = 2;
}

void game_over()				//��Ϸ���������������ʾ����
{
	if (score == 440)
	{
		for (int i = 0; i < 8; i++)		//��ʼ��blank����
		{
			for (int j = 0; j < 8; j++)
			{
				blank[i][j] = 0;
			}
		}

		//����Ч��
		for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < 5; i++)
			{
				switch (i)
				{
				case 0:
					for (int j = 0; j < 8; j++)
					{
						blank[0][j] = 0;
						blank[j][0] = 0;
						blank[7][j] = 0;
						blank[j][7] = 0;
					}
					blank[3][3] = blank[3][4] = blank[4][3] = blank[4][4] = 1;
					break;
				case 1:
					blank[2][2] = blank[2][3] = blank[2][4] = blank[2][5] = blank[3][2] =
						blank[3][5] = blank[4][2] = blank[4][5] = blank[5][2] = blank[5][3] =
						blank[5][4] = blank[5][5] = 1;
					break;
				case 2:
					blank[3][3] = blank[3][4] = blank[4][3] = blank[4][4] = 0;
					blank[1][1] = blank[1][2] = blank[1][3] = blank[1][4] = blank[1][5] = blank[1][6] =
						blank[2][1] = blank[2][6] = blank[3][1] = blank[3][6] = blank[4][1] = blank[4][6] =
						blank[5][1] = blank[5][6] = blank[6][1] = blank[6][2] = blank[6][3] = blank[6][4] =
						blank[6][5] = blank[6][6] = 1;
					break;
				case 3:
					blank[2][2] = blank[2][3] = blank[2][4] = blank[2][5] = blank[3][2] =
						blank[3][5] = blank[4][2] = blank[4][5] = blank[5][2] = blank[5][3] =
						blank[5][4] = blank[5][5] = 0;
					for (int j = 0; j < 8; j++)
					{
						blank[0][j] = 1;
						blank[j][0] = 1;
						blank[7][j] = 1;
						blank[j][7] = 1;
					}
					break;
				case 4:
					blank[1][1] = blank[1][2] = blank[1][3] = blank[1][4] = blank[1][5] = blank[1][6] =
						blank[2][1] = blank[2][6] = blank[3][1] = blank[3][6] = blank[4][1] = blank[4][6] =
						blank[5][1] = blank[5][6] = blank[6][1] = blank[6][2] = blank[6][3] = blank[6][4] =
						blank[6][5] = blank[6][6] = 0;
				}
				for (int k = 0; k < 15; k++)
				{
					displayUp(blank);
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < 80; i++)
		{
			displayUp(wrong);
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
				displayUp(num1);
			}
			break;
		case 2:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num2);
			}
			break;
		case 3:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num3);
			}
			break;
		case 4:
			for (int i = 0; i <150; i++)
			{
				displayUp(num4);
			}
			break;
		case 5:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num5);
			}
			break;
		case 6:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num6);
			}
			break;
		case 7:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num7);
			}
			break;
		case 8:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num8);
			}
			break;
		case 9:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num9);
			}
			break;
		case 0:
			for (int i = 0; i < 150; i++)
			{
				displayUp(num0);
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
		for (int j = 0; j < 8; j++)
		{
			blank[i][j] = 0;
		}
	}

	//����Ч��
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 5; i++)
		{
			switch (i)
			{
			case 0:
				for (int j = 0; j < 8; j++)
				{
					blank[0][j] = 0;
					blank[j][0] = 0;
					blank[7][j] = 0;
					blank[j][7] = 0;
				}
				blank[3][3] = blank[3][4] = blank[4][3] = blank[4][4] = 1;
				break;
			case 1:
				blank[2][2] = blank[2][3] = blank[2][4] = blank[2][5] = blank[3][2] =
					blank[3][5] = blank[4][2] = blank[4][5] = blank[5][2] = blank[5][3] =
					blank[5][4] = blank[5][5] = 1;
				break;
			case 2:
				blank[3][3] = blank[3][4] = blank[4][3] = blank[4][4] = 0;
				blank[1][1] = blank[1][2] = blank[1][3] = blank[1][4]= blank[1][5] = blank[1][6] =
					blank[2][1] = blank[2][6] = blank[3][1] = blank[3][6] = blank[4][1] = blank[4][6] =
					blank[5][1] = blank[5][6] = blank[6][1] = blank[6][2] = blank[6][3] = blank[6][4] =
					blank[6][5] = blank[6][6] = 1;
				break;
			case 3:
				blank[2][2] = blank[2][3] = blank[2][4] = blank[2][5] = blank[3][2] =
					blank[3][5] = blank[4][2] = blank[4][5] = blank[5][2] = blank[5][3] =
					blank[5][4] = blank[5][5] = 0;
				for (int j = 0; j < 8; j++)
				{
					blank[0][j] = 1;
					blank[j][0] = 1;
					blank[7][j] = 1;
					blank[j][7] = 1;
				}
				break;
			case 4:
				blank[1][1] = blank[1][2] = blank[1][3] = blank[1][4] = blank[1][5] = blank[1][6] =
					blank[2][1] = blank[2][6] = blank[3][1] = blank[3][6] = blank[4][1] = blank[4][6] =
					blank[5][1] = blank[5][6] = blank[6][1] = blank[6][2] = blank[6][3] = blank[6][4] =
					blank[6][5] = blank[6][6] = 0;
			}
			for (int k = 0; k < 15; k++)
			{
				displayUp(blank);
			}
		}
	}

	delay(300);
	//321,go
	for (int i = 0; i < 100; i++)
	{
		displayUp(num3);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		displayUp(num2);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		displayUp(num1);
	}
	delay(300);
	for (int i = 0; i < 100; i++)
	{
		displayUp(go);
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
	unsigned char leftFoot[8][8] =	
	{
	{ 0,0,0,0,0,0,0,0 },
	{ 0,1,1,1,0,0,0,0 },
	{ 0,1,1,1,0,0,0,0 },
	{ 0,1,1,1,0,0,0,0 },
	{ 0,1,1,0,0,0,0,0 },
	{ 0,1,1,0,0,0,0,0 },
	{ 0,1,1,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0 }
	};
	unsigned char rightFoot[8][8] =
	{
	{ 0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,1,1,1,0},
	{ 0,0,0,0,1,1,1,0 },
	{ 0,0,0,0,1,1,1,0 },
	{ 0,0,0,0,0,1,1,0 },
	{ 0,0,0,0,0,1,1,0 },
	{ 0,0,0,0,0,1,1,0 },
	{ 0,0,0,0,0,0,0,0 }
	};
	unsigned char hand[8][8] =
	{
	{ 0,0,0,0,1,0,0,0 },
	{ 0,0,0,1,1,1,0,0 },
	{ 0,0,0,1,1,1,1,0 },
	{ 0,0,0,1,1,1,1,0 },
	{ 0,1,0,1,1,1,1,0 },
	{ 0,0,1,1,1,1,1,0 },
	{ 0,0,1,1,1,1,1,0 },
	{ 0,0,0,1,1,1,0,0 }
	};
	int up, down;
	int a, b;
	while (1)			//�����
	{
		a = analogRead(A0);
		delay(300);
		b = analogRead(A0);
		if (a - b > 60 || b - a > 60)
		{
			left_light = (a + b) / 2 + 10;
			//Serial.println(left_light);
			break;
		}
		for (int i = 0; i < 70; i++)
		{
			displayUp(leftFoot);
		}
		delay(200);
	}
	while (1)			//���ҽ�
	{
		a = analogRead(A1);
		delay(300);
		b = analogRead(A1);
		if (a - b > 40 || b - a > 40)
		{
			right_light = (a + b) / 2 + 20;
			//Serial.println(right_light);
			break;
		}
		for (int i = 0; i < 70; i++)
		{
			displayUp(rightFoot);
		}
		delay(200);
	}
	while (1)			//������
	{
		a = analogRead(A1);
		if (a - right_light > 110)
		{
			hand_light = a - 80;
			//Serial.println(hand_light);
			break;
		}
		for (int i = 0; i < 70; i++)
		{
			displayUp(hand);
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
		unsigned char arrow[8][8] =		//�����ͷͼ��
		{
		{ 0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0 },
		{ 0,0,0,1,1,0,0,0 },
		{ 0,0,1,1,1,1,0,0 },
		{ 0,1,1,0,0,1,1,0 },
		{ 1,1,0,0,0,0,1,1 },
		{ 1,0,0,0,0,0,0,1 }
		};
		for (int k = 0; k < 30; k++)
		{
			for(int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (i < 7)
					{
						arrow[i][j] = arrow[i + 1][j];
					}
					else arrow[i][j] = arrow[0][j];
				}
			}
			for (int k = 0; k < 5; k++)
			{
				displayUp(arrow);
			}
			
		}
	}
}