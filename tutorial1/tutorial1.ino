// Tutorial 1: Blinking light modified with button switch
// Tutorial 2: Reading from button
int port13 = 13; // just a power source for now
int port12 = 12; // second LED power source
int button = 2; // example for button?

void setup()
{
  Serial.begin(9600);
  pinMode(port13, OUTPUT);
  //pinMode(port12, OUTPUT);
  pinMode(button, INPUT); // input mode
}

void loop()
{
  /*
  digitalWrite(port13, HIGH);
  digitalWrite(port12, LOW);
  delay(1000);
  digitalWrite(port13, LOW);
  digitalWrite(port12, HIGH);
  delay(500);
//  lol strobe lights 
  */

  int buttonState = digitalRead(button);
  if(buttonState == 1)
  {
    digitalWrite(port13, HIGH);
    
  }
  else
  {
    digitalWrite(port13, LOW);
    
  }
  Serial.println(buttonState);
  delay(1);
  
}
