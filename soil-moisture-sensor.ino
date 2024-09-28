// Define the pins
// Pinleri tanımla
int sensorPin = A0;
int sensorValue;

// initialise connection
// Seri konsol ile bağlantıyı tanımla
void setup() {
  Serial.begin(9600);
}

void loop() {
  // read sensor
  // sensörü oku
  sensorValue = analogRead(sensorPin);
  
  // show values
  // okunan değerleri göster
  Serial.print("Analog output: "); Serial.println(sensorValue);
  delay(500);
}
