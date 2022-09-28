// pin definitions
int potPin = A0;

// declare global variables
int lastPotValue;

void setup() {
  // set pin modes
  pinMode(potPin, INPUT);
  //initialise Serial port
  Serial.begin(9600);
}
void loop() {
  // read potPin and divide by 255 to give 5 possible readings
  int potValue = analogRead(potPin) / 255;

  // if something has changed since last value
  if(potValue != lastPotValue)
  {
    // enter switch case
    switch(potValue)
    {
      case 0:
        Serial.println("Very Low");
        break;
      case 1:
        Serial.println("Low");
      case 2:
        Serial.println("Moderate");
      case 3:
        Serial.println("High");
      case 4:
        Serial.println("Extreme");
        break;
      default:
        Serial.println("error!");
        break;
    }
    lastPotValue = potValue;
  }
}
