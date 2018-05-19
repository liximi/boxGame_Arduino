#define dataPin 10
#define latchPin 8
#define clockPin 9

int binary[]={1,2,4,8,16,32,64,128};
byte smalllove[8] = 
{  
  B00000000,
  B11111111,
  B11111111,
  B11100111,
  B11100111, 
  B11111111,
  B00000000,
  B11111111
};  

void setup() 
{
 pinMode(dataPin,OUTPUT);
  pinMode(latchPin,OUTPUT);
   pinMode(clockPin,OUTPUT);
}

void loop()
{
   for(int i = 0;i<8;i++)
   {
     digitalWrite(latchPin ,LOW);
     shiftOut(dataPin,clockPin,MSBFIRST,smalllove[i]);
     shiftOut(dataPin,clockPin,MSBFIRST,~binary[i]);
     digitalWrite(latchPin ,HIGH);
     delay(1);
   }  
}

