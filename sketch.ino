
int interA = 6;
int interB = 12;
int interC = 11;
int interD = 10;
int interE = 9;
int interF = 8;
int interG = 7;

int t = 1000;




void setup() {
  // put your setup code here, to run once:
  pinMode(interA, OUTPUT);
  pinMode(interB, OUTPUT);
  pinMode(interC, OUTPUT);
  pinMode(interD, OUTPUT);
  pinMode(interE, OUTPUT);
  pinMode(interF, OUTPUT);
  pinMode(interG, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //number 0
  digitalWrite(interA , LOW);
  digitalWrite(interB , LOW);
  digitalWrite(interC , LOW);
  digitalWrite(interD , LOW);
  digitalWrite(interE , LOW);
  digitalWrite(interF , LOW);
  digitalWrite(interG , HIGH);

  delay(t);

  //number1

  digitalWrite(interA , HIGH);
  digitalWrite(interB , LOW);
  digitalWrite(interC , LOW);
  digitalWrite(interD , HIGH);
  digitalWrite(interE , HIGH);
  digitalWrite(interF , HIGH);
  digitalWrite(interG , HIGH);

  delay(t);

//number2
  digitalWrite(interA , LOW);
  digitalWrite(interB , LOW);
  digitalWrite(interC , HIGH);
  digitalWrite(interD , LOW);
  digitalWrite(interE , LOW);
  digitalWrite(interF , HIGH);
  digitalWrite(interG , LOW);

  delay(t);

  //number3

  digitalWrite(interA , LOW);
  digitalWrite(interB , LOW);
  digitalWrite(interC , LOW);
  digitalWrite(interD , LOW);
  digitalWrite(interE , HIGH);
  digitalWrite(interF , HIGH);
  digitalWrite(interG , LOW);

  delay(t);

//number4
  digitalWrite(interA , HIGH);
  digitalWrite(interB , LOW);
  digitalWrite(interC , LOW);
  digitalWrite(interD , HIGH);
  digitalWrite(interE , HIGH);
  digitalWrite(interF , LOW);
  digitalWrite(interG , LOW);

  delay(t);

  //number5
  digitalWrite(interA , LOW);
  digitalWrite(interB , HIGH);
  digitalWrite(interC , LOW);
  digitalWrite(interD , LOW);
  digitalWrite(interE , HIGH);
  digitalWrite(interF , LOW);
  digitalWrite(interG , LOW);

  delay(t);

    //number6
  digitalWrite(interA , LOW);
  digitalWrite(interB , HIGH);
  digitalWrite(interC , LOW);
  digitalWrite(interD , LOW);
  digitalWrite(interE , LOW);
  digitalWrite(interF , LOW);
  digitalWrite(interG , LOW);

  delay(t);

  //number7
  digitalWrite(interA , LOW);
  digitalWrite(interB , LOW);
  digitalWrite(interC , LOW);
  digitalWrite(interD , HIGH);
  digitalWrite(interE , HIGH);
  digitalWrite(interF , HIGH);
  digitalWrite(interG , HIGH);

  delay(t);
  //number8
  digitalWrite(interA , LOW);
  digitalWrite(interB , LOW);
  digitalWrite(interC , LOW);
  digitalWrite(interD , LOW);
  digitalWrite(interE , LOW);
  digitalWrite(interF , LOW);
  digitalWrite(interG , LOW);

  delay(t);
  //number9
  digitalWrite(interA , LOW);
  digitalWrite(interB , LOW);
  digitalWrite(interC , LOW);
  digitalWrite(interD , LOW);
  digitalWrite(interE , HIGH);
  digitalWrite(interF , LOW);
  digitalWrite(interG , LOW);

  delay(t);


  
}
