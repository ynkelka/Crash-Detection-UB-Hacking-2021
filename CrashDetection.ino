// declare duration
long duration;
// declare distance
int distance;

void setup() {
  Serial.begin(9600);
  // trig
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  // echo
  pinMode(3, INPUT);
  // vibrator
  pinMode(4, OUTPUT);
}

void loop() {
  // send 40 kHz wave
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  // receive wave
  duration = pulseIn(3, HIGH);
  // x = vt
  distance = duration*0.034/2;
  // turn on/off timer
  if(distance<=800) {
    // lower voltage if further
    analogWrite(4, min(255, 255-(distance-3)-distance/8));
  } else {
    analogWrite(4, 0);
  }
}
