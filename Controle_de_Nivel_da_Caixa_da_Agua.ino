#include <LiquidCrystal.h>

#define outBomba 26
#define echoPin 22
#define trigPin 23

//LiquidCrystal lcd(<pino RS>, <pino enable>, <pino D4>, <pino D5>, <pino D6>, <pino D7>)
LiquidCrystal lcd(13, 12, 14, 27, 33, 32);

float dist1, dist2, dist3, dist, litros, distanceCm, speedOfSound;
unsigned long maxDurationMicrosec, durationMicrosec;


void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
  
  pinMode(outBomba, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}


float Ultrassonico(float temp) {
  speedOfSound = 0.03313 + 0.0000606 * temp;

  maxDurationMicrosec = 1000 / speedOfSound;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  durationMicrosec = pulseIn(echoPin, HIGH, maxDurationMicrosec);

  distanceCm = durationMicrosec / 2.0 * speedOfSound;

  if (distanceCm == 0) {
    return 400.0;
  } else {
    return distanceCm;
  }
}


void loop() {
  dist1 = Ultrassonico(25.0);
  dist2 = Ultrassonico(25.0);
  dist3 = Ultrassonico(25.0);
  dist = (dist1 + dist2 + dist3) / 3;
  litros = (20 - dist) * 13 * 18 * 0.001;
  
  Serial.println(dist);
  lcd.setCursor(0, 0);
  lcd.print("Distância: ");
  lcd.print(dist);
  lcd.print(" cm");
  lcd.setCursor(0, 1);
  lcd.print("Volume: ");
  lcd.print(litros);
  lcd.print(" l");

  if(dist > 10.0){
    digitalWrite(outBomba, 1);
  }
  else{
    digitalWrite(outBomba, 0);
  }
}
