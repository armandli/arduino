const int GP = 9;
const int RP = 11;
const int BP = 10;
const int RS = A0;
const int GS = A1;
const int BS = A2;

int rval = 0;
int gval = 0;
int bval = 0;
int rsen = 0;
int gsen = 0;
int bsen = 0;

void setup() {
  Serial.begin(9600);
  pinMode(GP, OUTPUT);
  pinMode(RP, OUTPUT);
  pinMode(BP, OUTPUT);
}

void loop() {
  rsen = analogRead(RS);
  delay(5);
  gsen = analogRead(GS);
  delay(5);
  bsen = analogRead(BS);
  
  Serial.print("Raw Sensor Values Red: ");
  Serial.print(rsen);
  Serial.print(" Green: ");
  Serial.print(bsen);
  Serial.print(" Blue: ");
  Serial.print(bsen);

  rval = rsen / 4;
  gval = gsen / 4;
  bval = bsen / 4;

  Serial.print("Output Values Red: ");
  Serial.print(rval);
  Serial.print(" Green: ");
  Serial.print(gval);
  Serial.print(" Blue: ");
  Serial.print(bval);

  analogWrite(RP, rval);
  analogWrite(GP, gval);
  analogWrite(BP, bval);
}
