/*
  Here we do complicated strategy...
 */

#define FORWARD 0
#define BACKWARD 1
#define LEFT 2
#define RIGHT 3

int led = 13;

int pin_1a = 0;
int pin_1y = 0;
int pin_2a = 0;
int pin_2y = 0;
int pin_3a = 0;
int pin_3y = 0;
int pin_4a = 0;
int pin_4y = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(pin_1a, OUTPUT);
  pinMode(pin_1y, OUTPUT);
  pinMode(pin_2a, OUTPUT);
  pinMode(pin_2y, OUTPUT);
  pinMode(pin_3a, OUTPUT);
  pinMode(pin_3y, OUTPUT);
  pinMode(pin_4a, OUTPUT);
  pinMode(pin_4y, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {

}

// set the motor voltages to go the right direction
void set_direction(int dir) {
  if (dir == FORWARD) {
    
  } else if (dir == BACKWARD) {
    
  } else if (dir == LEFT) {
    
  } else if (dir == RIGHT) {
    
  }
}

