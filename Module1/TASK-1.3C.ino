// C++ code
//
#define sensorA 2
#define sensorB 3

const byte ledA = 5;
uint8_t motionA = LOW;

const byte ledB = 6;
uint8_t motionB = LOW;



void setup()
{
  pinMode(sensorA, INPUT_PULLUP);
  pinMode(sensorB, INPUT_PULLUP);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  Serial.begin(9600);
  
  attachInterrupt(digitalPinToInterrupt(sensorA), motionDetectA, RISING);
  attachInterrupt(digitalPinToInterrupt(sensorB), motionDetectB, RISING);
}

void loop()
{
  
}

void motionDetectA()
{
  
  motionA = !motionA;
  
  digitalWrite(ledA, motionA);
  Serial.println("Motion Detected by sensor A"); 

}

void motionDetectB()
{
  
  motionB = !motionB;
  
  digitalWrite(ledB, motionB);
  Serial.println("Motion Detected by sensor B");

}