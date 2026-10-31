int led1 = 8;
int led2 = 9;

unsigned long previous1 = 0;
unsigned long previous2 = 0;

int state1 = LOW;
int state2 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop(){
  unsigned long current = millis();


if(current - previous1 >= 500) {

  previous1 = current;
  state1 = !state1;
  digitalWrite(led1, state1);
}

if(current - previous2 >= 1000) {

  previous2 = current;
  state2 = !state2;
  digitalWrite(led2, state2);
}
}
