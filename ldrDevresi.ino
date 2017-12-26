
int ldrDeger=0;
int esikDeger=340;

void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop(){
   ldrDeger=analogRead(A2);
  Serial.println("ldr degeri: " ); 

  Serial.println(ldrDeger);

  delay(1000);
  
  if(ldrDeger>esikDeger){
    digitalWrite(13, HIGH);
  }
  if(ldrDeger<esikDeger){
    digitalWrite(13, LOW);
  }
 
}

