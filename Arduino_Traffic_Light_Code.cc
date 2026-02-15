void setup () {
  pinMode(13, OUTPUT); //Green
  pinMode(12,OUTPUT); //Yellow
  pinMode(11,OUTPUT); //Red
}

void loop () {
  digitalWrite(13, HIGH); //Green turns on
  digitalWrite(12, LOW); //Yellow is off
  digitalWrite(11,LOW); //Red is off
  delay(20000); 
  digitalWrite(13, LOW); //Green turns off
  digitalWrite(12, HIGH); //Yellow turns on
  delay(5000);
  digitalWrite(11, HIGH); //Red turn on
  digitalWrite(12, LOW); //Yellow turns off
  delay(20000);
}
//This is my first Project :D
//Have a great day
//January 11th, 2026
//Breadboard and Elegoo Uno R3
