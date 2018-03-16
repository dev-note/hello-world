// depan kanan
int enFR = 11;
int inFR4 = 12;
int inFR3 = 13;
//kanan belakang
int enRR = 10;
int inRR2 = 9;
int inRR1 = 8;
//kiri depan
int enFL = 5;
int inFL2 = 6;
int inFL1 = 7;
//kiri belakang
int enRL = 3;
int inRL4 = 4;
int inRL3 = 2;
int vSpeed=200;
byte serialA;


void setup() {
  // put your setup code here, to run once:
pinMode (enFR, OUTPUT);
pinMode (inFR4, OUTPUT);
pinMode (inFR3, OUTPUT);
pinMode (enRR, OUTPUT);
pinMode (inRR2, OUTPUT);
pinMode (inRR1, OUTPUT);
pinMode (enFL, OUTPUT);
pinMode (inFL2, OUTPUT);
pinMode (inFL1, OUTPUT);
pinMode (enRL, OUTPUT);
pinMode (inRL4, OUTPUT);
pinMode (inRL3, OUTPUT);
Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0) {serialA = Serial.read();Serial.println(serialA);}
if (serialA == '0'){
      vSpeed=0;}
    else if (serialA == '1'){
      vSpeed=50;}
    else if (serialA == '2'){
      vSpeed= 670;}
    else if (serialA == '3'){
      vSpeed=90;}
    else if (serialA == '4'){
      vSpeed=110;}
    else if (serialA == '5'){
      vSpeed=130;}
    else if (serialA == '6'){
      vSpeed=150;}
    else if (serialA == '7'){
      vSpeed=170;}
    else if (serialA == '8'){
      vSpeed=190;}
    else if (serialA == '9'){
      vSpeed=220;}
    else if (serialA == 'q'){
      vSpeed=255;}
   switch (serialA) {
    // forward
   case 'F':
        analogWrite(enFR, vSpeed); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, LOW);
        digitalWrite(inFR4, HIGH);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, HIGH);
        digitalWrite(inRR1, LOW); 
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, LOW);
        digitalWrite(inFL1, HIGH);
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, HIGH);
        digitalWrite(inRL3, LOW); 
        break; 
        
         // rotate kekiri
    case 'L': 
        analogWrite(enFR, 80); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, LOW);
        digitalWrite(inFR4, HIGH);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, HIGH);
        digitalWrite(inRR1, LOW);
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, HIGH);
        digitalWrite(inFL1, LOW); 
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, LOW);
        digitalWrite(inRL3, HIGH); 
        
        break; 
        
    // rotate ke kanan
    case 'R': 

        analogWrite(enFR, 80); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, HIGH);
        digitalWrite(inFR4, LOW);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, LOW);
        digitalWrite(inRR1, HIGH); 
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, LOW);
        digitalWrite(inFL1, HIGH);
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, HIGH);
        digitalWrite(inRL3, LOW); 
        break; 
       
    // forward left
    case 'G':  // belum selesai harus ditambah speed control
        analogWrite(enFR, vSpeed); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, LOW);
        digitalWrite(inFR4, HIGH);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, HIGH);
        digitalWrite(inRR1, LOW); 
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, HIGH);
        digitalWrite(inFL1, HIGH);
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, LOW);
        digitalWrite(inRL3, HIGH); 
        break; 
    

    // forward right
    case 'I':  // belum selesai harus ditambah speed control
        analogWrite(enFR, vSpeed); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, HIGH);
        digitalWrite(inFR4, HIGH);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, LOW);
        digitalWrite(inRR1, HIGH); 
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, LOW);
        digitalWrite(inFL1, HIGH);
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, HIGH);
        digitalWrite(inRL3, LOW); 
        break; 
    

    // backward left
    case 'H':  // belum selesai harus ditambah speed control
        analogWrite(enFR, vSpeed); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, HIGH);
        digitalWrite(inFR4, LOW);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, LOW);
        digitalWrite(inRR1, HIGH); 
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, LOW);
        digitalWrite(inFL1, HIGH);
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, HIGH);
        digitalWrite(inRL3, HIGH);  
        break; 
    
    // backward right
    case 'J':  // belum selesai harus ditambah speed control
        analogWrite(enFR, vSpeed); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, LOW);
        digitalWrite(inFR4, HIGH);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, HIGH);
        digitalWrite(inRR1, HIGH); 
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, HIGH);
        digitalWrite(inFL1, LOW);
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, LOW);
        digitalWrite(inRL3, HIGH);  
        break; 
    
    // backward
    case 'B':
        analogWrite(enFR, vSpeed); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, HIGH);
        digitalWrite(inFR4, LOW);
        analogWrite(enRR, vSpeed); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, LOW);
        digitalWrite(inRR1, HIGH);
        analogWrite(enFL, vSpeed); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, HIGH);
        digitalWrite(inFL1, LOW); 
        analogWrite(enRL, vSpeed); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, LOW);
        digitalWrite(inRL3, HIGH); 
        break;break; 
    
     // Stop
     case 'S':
        digitalWrite(enFR, HIGH); // enable/speedcontrol kanan depan
        digitalWrite(inFR3, HIGH);
        digitalWrite(inFR4, HIGH);
        digitalWrite(enRR,HIGH); // enable/speedcontrol kanan belakang
        digitalWrite(inRR2, HIGH);
        digitalWrite(inRR1, HIGH);
        digitalWrite(enFL, HIGH); // enable/speedcontrol kiri depan
        digitalWrite(inFL2, HIGH);
        digitalWrite(inFL1, HIGH); 
        digitalWrite(enRL, HIGH); // enable/speedcontrol kiri belakang
        digitalWrite(inRL4, HIGH);
        digitalWrite(inRL3, HIGH); }
    }





