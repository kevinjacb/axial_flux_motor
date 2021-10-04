
const int sensor = 9;
const int output1 = 4, output2 = 5;
bool state = false;
void setup() {
   pinMode(sensor, INPUT);  //initializing the respective pins
   pinMode(output1,OUTPUT);
   pinMode(output2,OUTPUT);
   attachInterrupt(digitalPinToInterrupt(sensor),triggered, CHANGE);
}

void loop() { //Sets the pole of the coil(s)
    digitalWrite(output1,state);
    digitalWrite(output2,!state);
}
void triggered(){ //Triggers a change in pole when the condition is met
  state = !state;
}
