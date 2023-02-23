// C++ code
//
#define PIR 2 

const byte led = 3;
uint8_t motion = LOW;

void setup()
{
  pinMode(PIR, INPUT_PULLUP); // initializing the PIR sensor 
  pinMode(led, OUTPUT); // initializing the led
  Serial.begin(9600); // starting serial communication at 9600 baud
  
  attachInterrupt(digitalPinToInterrupt(PIR), MotionDetect, RISING);
}

void loop()
{
  
}

void MotionDetect()
{
  
  motion = !motion;
  
    digitalWrite(led, motion); 
    Serial.println("Motion Detected"); 

 
}