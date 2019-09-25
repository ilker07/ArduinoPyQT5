
char veri;
#define led 4
#define role 7
void setup() {

 pinMode(led,OUTPUT);
  pinMode(role,OUTPUT);
  Serial.begin(9600);

}

void loop() {

 int okunan=analogRead(A0);
 Serial.println(okunan);
 delay(10);

 if(Serial.available())
 {
  veri=Serial.read();
  if(veri=='1')
    digitalWrite(led,HIGH);
    
  if(veri=='0')
     digitalWrite(led,LOW);
     
   if(veri=='2')
     digitalWrite(role,HIGH);
    if(veri=='3')
     digitalWrite(role,LOW);     
   veri="";
 }

  

}
