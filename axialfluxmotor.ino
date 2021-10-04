
const int sensor = 9;
const int output1 = 4, output2 = 5;
bool state = false;
void setup() {
  // put your setup code here, to run once:
   pinMode(sensor, INPUT);
   pinMode(output1,OUTPUT);
   pinMode(output2,OUTPUT);
   attachInterrupt(digitalPinToInterrupt(sensor),triggered, CHANGE);
}

void loop() {
    digitalWrite(output1,state);
    digitalWrite(output2,!state);
}
void triggered(){
  state = !state;
}
