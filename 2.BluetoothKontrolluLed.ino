//led pinlerini tanimlama
 int led =11;

//ses tanimi
String ses;

void setup() {


  pinMode(led,OUTPUT);
  
  

  //Bluetooth icin seri port olusturuyoruz
Serial.begin(9600);

}

void loop() {
 
while (Serial.available()){

delay(10);
char c = Serial.read();

if (c == '#') {break;}
ses += c;
}



//----------Gelen sesli komuta gore led calisiyor-//
if(ses == "*sanayi") 
{
  
digitalWrite(led, HIGH);

}

//----------Gelen sesli komuta göre led sonuyor----------//
else if(ses == "*kapan") {
digitalWrite(led, LOW); 
}


//-----------------------------------------------------------------------//
ses="";



}
