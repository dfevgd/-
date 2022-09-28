unsigned int count, toggle;

void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while(!Serial) {
    ; // wait for serial port to connect.
  }
  count = toggle = 0;
  digitalWrite(7, toggle); // turn off LED.
}

void loop() {
  count++;
  if (count <= 10){
    toggle = 0;
  }
  else if(10< count and count <= 20){
    toggle = toggle_state(toggle); // toggle LED value.
  }
  else{
    toggle = 1;
  }
  digitalWrite(7, toggle); // update LED status.
  delay(100); // wait for 100 milliseconds
}

int toggle_state(int toggle) {
  return 1 - toggle;
}
