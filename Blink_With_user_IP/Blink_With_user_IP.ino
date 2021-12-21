int LEDpin = 11;
int delay_seconds = 10;
int i;

int delay_milliseconds = delay_seconds* 1000;
float voltage = 2.5;
float V_manual=(256/5)*voltage;
float V_map = map(voltage,0,5,0,255);
  

void setup()
{
  Serial.begin(9600);
  Serial.println(V_manual);
  Serial.println(V_map);
  pinMode(LEDpin , OUTPUT);
}
void loop()
{
  for(i=0;i<V_manual;i++)
  {
  voltage = i;
  analogWrite(LEDpin ,voltage);
  delay (1000);
  }
}
