#define MOISTURE_SENSOR A0
#define WATER_PUMP 13
#define ENERGY 12
#define STANDBY 2000
#define THRESHOLD 700

void setup() {
  Serial.begin(9600);
  pinMode(MOISTURE_SENSOR, INPUT);
  pinMode(WATER_PUMP, OUTPUT);
  pinMode(ENERGY, OUTPUT);
  digitalWrite(ENERGY, HIGH);
}

void loop() {
  int analog_moisture;

  analog_moisture = analogRead(MOISTURE_SENSOR);

  // Serial.println(analog_moisture);

  if (analog_moisture > THRESHOLD) {
    digitalWrite(WATER_PUMP, HIGH);
  } else {
    digitalWrite(WATER_PUMP, LOW);
  }

  delay(STANDBY);

}
