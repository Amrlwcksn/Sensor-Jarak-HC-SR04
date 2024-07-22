
int trig = 13;
int echo = 12;
long durasi, jarak;
int merah = 26;
int kuning =27;
int hijau = 14;
int buzzer = 25;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(merah,OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  durasi = pulseIn(echo, HIGH);
  jarak = (durasi / 2 ) / 29.1;
  if(jarak >= 10){
    digitalWrite(hijau, HIGH);
    digitalWrite(merah, LOW);
    digitalWrite(kuning, LOW);
    digitalWrite(buzzer, LOW);
  }else if ((jarak > 5) && (jarak <=10 )){
    digitalWrite(hijau, LOW);
    digitalWrite(merah, LOW);
    digitalWrite(kuning, HIGH);
    digitalWrite(buzzer, LOW);
    delay(400);
    digitalWrite(buzzer, HIGH);
    delay(400);
  }
  else if ((jarak >2 )&& (jarak <=5)) {
    digitalWrite(hijau, LOW);
    digitalWrite(merah, HIGH);
    digitalWrite(kuning, LOW);
    digitalWrite(buzzer, LOW);
    delay(200);
    digitalWrite(buzzer, HIGH);
    delay(200);
  }
  // Serial.print("Jarak benda : ");
  // Serial.print(jarak);
  // Serial.print(" cm");

}
