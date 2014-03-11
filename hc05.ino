#define vcc 9 // vcc
#define key 8 // key       
#define ini 13  // estado de iniciar  
#define confi 12 // estado de configurar 
#define rei 11 // estado de reiniciar bt 
#define lis 10  // estado listo 

void setup(){
 Serial.begin(9600);
  pinMode(vcc,OUTPUT);
  pinMode(key,OUTPUT);
  pinMode(ini,OUTPUT);
  pinMode(confi,OUTPUT);
  pinMode(rei,OUTPUT);
  pinMode(lis,OUTPUT);
    
    //inicia el programa
   digitalWrite(ini,HIGH);
     delay(1000);
  
    //proceso de configuracion.   
   digitalWrite(ini,LOW);
   digitalWrite(confi,HIGH);
   digitalWrite(vcc,HIGH);
   digitalWrite(key,HIGH);
   delay(5000);
   
   //proceso de reiniciar bthc-05.
   digitalWrite(confi,LOW);
   digitalWrite(vcc,LOW);
   digitalWrite(key,LOW);
   delay(2000);
   digitalWrite(vcc,HIGH);
   digitalWrite(rei,HIGH);
     delay(5000);
   digitalWrite(rei,LOW);
   digitalWrite(lis,HIGH);
     delay(5000);
  

}



void reset(){
digitalWrite(vcc,LOW);
delay(2000);
digitalWrite(vcc,HIGH);
digitalWrite(key,LOW);

}
/*
void sendATCommand(char *command)
{
  
 
      Serial.print("AT");                       //sent AT cmd to HC-05
       if(strlen(command) > 1){
         Serial.print("+");
         Serial.print(command);
       }
       Serial.print("\r\n");
      
   
  
}
void setupbt()
{

 Serial.begin(38400);//HC-05 AT mode baud rate is 38400

  delay(500);

  sendATCommand("RESET");                  //send to HC-05 RESET
  delay(1000);
  //sendATCommand("ORGL");  //send ORGL, reset to original properties
  sendATCommand("NAME=PRUEBA");
  sendATCommand("ROLE=1");                 //send ROLE=1, set role to master
  sendATCommand("CMODE=0");                //send CMODE=0, set connection mode to specific address
  sendATCommand("BIND=2013,06,284415");    //send BIND=??, bind HC-05 to OBD bluetooth address
  
}*/
void loop(){
  }
  
  
