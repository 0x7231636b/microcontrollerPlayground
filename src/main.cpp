#include <Arduino.h>

#define LOG(x) Serial.println(x);
#define LOG_VALUE(x, y) Serial.print(x); LOG(y)

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  LOG_VALUE("result is: ", result);
}

int counter = 0;

void loop() {
  // put your main code here, to run repeatedly:
  LOG_VALUE("counter: ", counter);
  counter++;
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}