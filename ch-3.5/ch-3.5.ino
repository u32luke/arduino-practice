int x = 10;
int y = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i = 1;
  Serial.println(i);
  delay(1000);
  ++i;
}
