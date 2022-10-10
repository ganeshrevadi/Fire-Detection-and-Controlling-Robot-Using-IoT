 #define MLa 8//left motor 1st pin

#define MLb 9//left motor 2nd pin

#define MRa 10 //right motor 1st pin

#define MRb 11 //right motor 2nd pin

#define pump 12 

#define Sensor 2 // flame sensor to pin 2 of arduino

void setup()
{


pinMode(Sensor, INPUT);

pinMode(pump, OUTPUT);

pinMode(MLa, OUTPUT);

pinMode(MLb, OUTPUT);

pinMode(MRa, OUTPUT);

pinMode(MRb, OUTPUT);

Serial.begin(9600);
}
void loop()
{

 int Sensorin= digitalRead(Sensor);

Serial.println(Sensorin);
delay(100);

if (Sensorin == LOW)// applying condition
{

digitalWrite(MLa, LOW); 

digitalWrite(MLb, LOW);

digitalWrite(MRa, LOW);

digitalWrite(MRb, LOW);

delay(500);
digitalWrite(pump,HIGH);
delay(10000);

//Backward

digitalWrite(MLa, LOW);

digitalWrite(MLb, HIGH); 

digitalWrite(MRa, LOW);

digitalWrite(MRb, HIGH);

delay(1000);

//Rightturn

digitalWrite(MLa, HIGH); 

digitalWrite(MLb, HIGH);

digitalWrite(MRa, LOW);

digitalWrite(MRb, LOW);

delay(750);

digitalWrite(MLb, LOW); 

digitalWrite(MLa, HIGH);
 
digitalWrite(MRa, HIGH);

digitalWrite(MRb, LOW);

delay(2000);

digitalWrite(MLa, HIGH); 

digitalWrite(MLb, LOW);

digitalWrite(MRa, HIGH);

digitalWrite(MRb, LOW);

delay(750);



}
else
{

digitalWrite(pump, LOW);

digitalWrite(MLb, LOW); 

digitalWrite(MLa, HIGH);
 
digitalWrite(MRa, HIGH);

digitalWrite(MRb, LOW);
}
}
