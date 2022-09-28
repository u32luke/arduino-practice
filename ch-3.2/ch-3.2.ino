// Arduino practice. Code copied from https://core-electronics.com.au/courses/arduino-workshop-for-beginners/
// Not my own work 
// Chapter 3.2

// pin definitions
int ledPin = 13;
int buttonPin = 2;

// global variables
int toggleState;
int buttonState = 1;

void setup() {
  // setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // read the value  of the pot and store it as potValue
  buttonState = digitalRead(buttonPin);

  while(buttonState == 0)
  {
    toggleState =! toggleState;
    digitalWrite(ledPin, toggleState);
    delay(50);
    buttonState = digitalRead(buttonPin);
  }
  toggleState =! toggleState;
  digitalWrite(ledPin, toggleState);
  delay(200);
}
