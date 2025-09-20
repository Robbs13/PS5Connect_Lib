#include <ps5Controller.h>

void setup() {
  Serial.begin(115200);

  ps5.begin("A0:FA:9C:60:58:3D"); //replace with MAC address of your controller
  Serial.println("Ready.");
}

void loop() {
  if (ps5.isConnected()) {
    Serial.println("Connected!");
  }

  delay(3000);
}
