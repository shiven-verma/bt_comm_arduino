/*Bluetooh Basic: LED ON OFF
This program lets you to control a LED on pin 7 of arduino using a bluetooth module
For connections see */




char Inp_value = 0;                //Variable for storing Inp_value
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(7, OUTPUT);        //Sets digital pin 7 as output pin
}
void loop()
{
  if(Serial.available() > 0)  
  {
    Inp_value = Serial.read(); //Read the incoming data and store it into variable Inp_value
    Serial.print(Inp_value);        //Print Value of Inp_value in Serial monitor
    Serial.print("\n");        //New line 
    if(Inp_value == '1')            //Checks whether value of input is equal to 1 
      digitalWrite(7, HIGH);  //If value is 1 then LED turns ON
    else if(Inp_value == '0')       //Checks whether value of Inp_value is equal to 0
      digitalWrite(7, LOW);   //If value is 0 then LED turns OFF
  }                            
 
}       
