// Definitions Arduino pins connected to input H Bridge
int EN1 = 9;
int IN1 = 8;
int IN2 = 7;
int IN3 = 5;
int IN4 = 4;
int EN2 = 3;

void setup()
{
// Set the output pins
    pinMode(EN1, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(EN2, OUTPUT);
}

void loop()
{
// Rotate the Motor A clockwise
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    delay(2000); // this pauses the program for 200 milliseconds

// Rotate the Motor B clockwise
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(2000);

// Rotates the Motor A counter-clockwise
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    delay(2000);

// Rotates the Motor B counter-clockwise
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(2000);

// Change the speed of the motors
    // rotate both motors clockwise
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    analogWrite(EN1, 100); // change the number in here to change the speed of the motor
    analogWrite(EN2, 100); // the number must be between 0 and 255
    delay(2000);

// see https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/
// for info on analog write

}
