unsigned long lastBlink = 0;
int blinkCount = 0;
bool ledState = false;
const int interval = 1000; // time in miliseconds

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  unsigned long now = millis();
  if(now - lastBlink >= interval){
    lastBlink = now; // Last blink is now
    ledState = !ledState; // Turns led on or off
    digitalWrite(2, ledState);
    blinkCount++;
    Serial.print("Blink: ");
    Serial.println(blinkCount);

  }


  delay(100);
}
