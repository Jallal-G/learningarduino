int PotPin = A1;
int PotValue;
int LedPin = 11;
float LedValue;

void setup(){
  pinMode(LedPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  PotValue=analogRead(PotPin);
  LedValue = PotValue*(255./1023.);
  analogWrite(LedPin, LedValue);
  Serial.println(LedValue);
}
