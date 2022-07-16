void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int LED_Reading = analogRead(A0);
  
  
  float voltage = LED_Reading * (5.0 / 1023.0);  // 5/1023 = 0.004v per unit read from the analog pin

  Serial.print("Raw: ");
  Serial.print(LED_Reading);
  Serial.print(", Volatage: ");
  Serial.println(voltage);
  
}

/*
analogRead(ping);
10bit resolution (0 - 1023)

0 -> 0.0v
256 -> 1.25v
512 -> 2.5V
768 -> 3.75v
1023 -> 5.0v

*/

//Maximum volt we can read from the arduino is 5v
