
#define SENSOR_1_PIN A0
#define SENSOR_1_OUTPUT 3

void setup() {
  Serial.begin(9600);

  pinMode(SENSOR_1_OUTPUT, OUTPUT);
  
}

void loop() {
  int SENSOR_1_VALUE = analogRead(SENSOR_1_PIN);
  
  Serial.println("SENSOR_1: " + String(SENSOR_1_VALUE)); 

  if(SENSOR_1_VALUE < 1){ digitalWrite(SENSOR_1_OUTPUT, HIGH); }
else{ digitalWrite(SENSOR_1_OUTPUT, LOW); }
  

}