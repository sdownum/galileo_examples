
int switchPin = 8;
int ledPin = 11;
int ledLevel = 0;
int increment = 50;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(50);
  if (digitalRead(switchPin) == HIGH) {
    ledLevel += increment;
    Serial.println(ledLevel);
  }
  if (ledLevel > 255 || ledLevel <= 0)
    increment *= -1;
  
  analogWrite(ledPin, ledLevel); 
   
}
