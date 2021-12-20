int LEDpin = 11;
int delay_seconds = 10;
int i;

int delay_milliseconds = delay_seconds* 1000;
int analoginput; 
void setup()
{

  pinMode(LEDpin , OUTPUT);

}

void loop() 

{
  for(i=0;i<256;i++)
  {
  analoginput = i;
  analogWrite(LEDpin , analoginput);
  delay (1000);
  }
}

