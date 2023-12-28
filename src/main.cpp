#include <Arduino.h>

#define LOG(x) Serial.println(x);
#define LOG_VALUE(x, y) Serial.print(x); LOG(y)

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  LOG_VALUE("result is: ", result);
  pinMode(13, OUTPUT);
}

int counter = 0;
bool light = false;

void loop() {
  // put your main code here, to run repeatedly:
  LOG_VALUE("counter: ", counter);
  counter++;
  if(light) {
    digitalWrite(13, HIGH);
    light = !light;
  }
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}