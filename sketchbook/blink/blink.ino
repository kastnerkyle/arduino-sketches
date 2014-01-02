// Blink

void setup(void) {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
}

int main() {
    init();
    setup();
    while(true) {
        loop();
    }
}
