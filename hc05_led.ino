char gelen_karakter;
const int led2=2,led3=3,led4=4,led5=5;
void setup() {
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
Serial.begin(9600);

}

void loop() {
while(Serial.available()>0){
  gelen_karakter=Serial.read();}
  if(gelen_karakter=='0')
  {digitalWrite(led2,HIGH);
  Serial.println("led2 yandı");
  }
  else if(gelen_karakter=='1')
  {digitalWrite(led2,LOW);
  Serial.println("led2 söndü");
  }
   else if(gelen_karakter=='2')
  {digitalWrite(led3,HIGH);
  Serial.println("led3 yandı");
  }
   else if(gelen_karakter=='3')
  {digitalWrite(led3,LOW);
  Serial.println("led3 söndü");
  }
   else if(gelen_karakter=='4')
  {digitalWrite(led4,HIGH);
  Serial.println("led4 yandı");
  }
   else if(gelen_karakter=='5')
  {digitalWrite(led4,LOW);
  Serial.println("led4 söndü");
  }
   else if(gelen_karakter=='6')
  {digitalWrite(led5,HIGH);
  Serial.println("led5 yandı");
  }
  else if(gelen_karakter=='7')
  {digitalWrite(led5,LOW);
  Serial.println("led5 södü");
  }
  


}
