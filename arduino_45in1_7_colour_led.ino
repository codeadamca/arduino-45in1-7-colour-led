int crtl =  13;

void setup()   {                
  pinMode(crtl, OUTPUT);
  digitalWrite(crtl,LOW);
}

void loop()                     
{
  digitalWrite(crtl, HIGH);
  delay(5000);
  digitalWrite(crtl, LOW);
  delay(5000);
}