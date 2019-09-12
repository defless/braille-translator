

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void turnOff(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void loop(){
  while (Serial.available() == 0);
  int val = Serial.read();
  switch (val){
    
      case 'a':
      turnOff();
      digitalWrite(2, HIGH);
      break;
      
      case 'b':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      break;

      case 'c':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(5, HIGH);
      break;
      
      case 'd':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;
      
      case 'e':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 'f':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      break;

      case 'g':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 'h':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 'i':
      turnOff();
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      break;

      case 'j':
      turnOff();
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 'k':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      break;

      case 'l':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      break;

      case 'm':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      break;

      case 'n':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 'o':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(6, HIGH);
      break;
     
           
      case 'p':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      break;

      case 'q':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 'r':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 's':
      turnOff();
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      break;

      case 't':
      turnOff();
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;

      case 'u':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      break;

      case 'v':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      break;
      

      case 'w':
      turnOff();
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;

      case 'x':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(7, HIGH);
      break;

      case 'y':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;

      case 'z':
      turnOff();
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      break;
      
      case '0':
      turnOff();
      break;

      
     
  }

}
