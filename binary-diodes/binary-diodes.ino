#define ARRAY_SIZE 4
int pins[] = {3, 4, 5, 6};

void setup() {
  for (byte i = 0; i < ARRAY_SIZE; ++i) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // from 0000 to 1111
  String binary = "1101";
  for (byte i = 0; i < binary.length(); ++i) {
    auto state = binary[i] == '0' ? LOW : HIGH;
    digitalWrite(pins[i], state);
  }
}
