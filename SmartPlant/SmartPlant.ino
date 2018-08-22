/*
# 0 - 300     dry soil
# 300 - 700     humid soil
# 700 - 950     in water
*/

void setup() {
  Serial.begin(9600); // Open serial port & set baud rate
  // Initialise digital pin LED_BUILTIN
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0); // Sensor to Analog 0
  Serial.println(val); // Print the value to serial port

  if( val <= 300 ) {
    // Dry soil
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // Wet soil
    digitalWrite(LED_BUILTIN, LOW);
  }

  // Wait 2 seconds between checks
  delay(2000);
}

