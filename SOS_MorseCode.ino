const int LEDPin = 2;
const int BuzzerPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //...---... SOS Morse Code

  // 3 dots
  for (int i = 0; i < 3; i++) {
    digitalWrite(LEDPin, HIGH);
    tone(BuzzerPin, 600, 150); //600HZ, 150ms-length
    delay(150); //wait for 150ms, give a time for a piezo to play sound
    digitalWrite(LEDPin, LOW);
    delay(100);
  }
  delay(100);
  
  //3 dashes
  for (int i = 0; i < 3; i++) {
    digitalWrite(LEDPin, HIGH);
    tone(BuzzerPin, 600, 300); //600HZ, 300ms-length
    delay(300); //wait for 3000ms, give a time for a piezo to play sound
    digitalWrite(LEDPin, LOW);
    delay(100);
  }
  delay(100);
  
  // 3dots
  for (int i = 0; i < 3; i++) {
    digitalWrite(LEDPin, HIGH);
    tone(BuzzerPin, 600, 150); //600HZ, 150ms-length
    delay(150); //wait for 150ms, give a time for a piezo to play sound
    digitalWrite(LEDPin, LOW);
    delay(100);
  }
  
  delay(5000); //delay 5sec


}
