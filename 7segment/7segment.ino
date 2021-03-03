int a = 2;  //For displaying segment "a"
int b = 3;  //For displaying segment "b"
int c = 4;  //For displaying segment "c"
int d = 5;  //For displaying segment "d"
int e = 6;  //For displaying segment "e"
int f = 7;  //For displaying segment "f"
int g = 8;  //For displaying segment "g"

void setup() {               
  pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D
  pinMode(e, OUTPUT);  //E
  pinMode(f, OUTPUT);  //F
  pinMode(g, OUTPUT);  //G
}

void displayDigit(int digit)
{
  switch(digit) {
    case 0: 
    	digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
    	break;
  	case 1: 
    	digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    	break;
    case 2: 
    	digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
    	break;
    case 3: 
    	digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
    	break;
    case 4: 
    	digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
    	break;
    case 5: 
    	digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
    	break;
    case 6: 
    	digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
    	break;
    case 7: 
    	digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    	break;
    case 8: 
    	digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
    	break;
    case 9: 
    	digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
    	break;
  }
}
void turnOff()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}


void loop() {
  for(int i=0;i<10;i++) {
  	displayDigit(i);
    Serial.print(i);
    delay(1000);
  }
  turnOff();
}