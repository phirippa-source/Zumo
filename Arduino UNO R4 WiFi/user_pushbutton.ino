#define USERPUSHBUTTON 12

void setup(){
  Serial.begin(115200);
  pinMode(USERPUSHBUTTON, INPUT_PULLUP);
}

void loop() {
  int btn_state = digitalRead(USERPUSHBUTTON);
  Serial.println(btn_state);
  delay(50);
}
