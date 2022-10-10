//manually setting the lamp to 13
const int led0 = 13;
//manually set weight to an integer
const int weight = 0;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led0,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  //if weight is greater than 1000 we send power into the device
  if(weight >= 1000){
    digitalWrite(led0,HIGH); //sets the power to HIGH as to create voltage
    delay(1000); //wait a while
    digitalWrite(led0,LOW); //sets power to low to create a flashing effect
    delay(1000); //wait a while
  }
  //if the weight is less than or equal to 1000 you get this fun sentence
  else{
    Serial.print("weight was too little");
  }
}
