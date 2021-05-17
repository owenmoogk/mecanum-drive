#define ENB 5
#define IN4 7
#define IN3 8
#define IN2 9
#define IN1 11
#define ENA 6

void setup() {
  Serial.begin(9600);
  pinMode(ENB, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN1, OUTPUT);
}

void loop() {
  //  forward left wheels
//  digitalWrite(IN1, LOW);
//  digitalWrite(IN2, HIGH);
  digitalWrite(ENA, HIGH);
//  digitalWrite(IN3, LOW);
//  digitalWrite(IN4, HIGH);
//  digitalWrite(ENB, HIGH);
Serial.println("fuck the hoes");
}
