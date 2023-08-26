int str=4;   //for anticlockwise
int rev=7;   //for clockwise
int pir=10;
void setup()
{
  pinMode(str, OUTPUT);
  pinMode(rev,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  if(digitalRead(pir)==HIGH){
   
    digitalWrite(rev,HIGH);
    delay(5000);
    
    
    Serial.println("Welcome");
    
    
    digitalWrite(rev,LOW);
    delay(10000);
    
  
    digitalWrite(str,HIGH);
    delay(5000);
    
    
    digitalWrite(str,LOW);
    
  }
  
}