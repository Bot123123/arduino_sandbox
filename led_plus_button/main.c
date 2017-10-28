const int buttonPin = 2;   
const int ledPin =  13;
 
int buttonState = 0;       

bool wasButtonPressed = false;
bool isLedActive = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
 
void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
      wasButtonPressed = true;
    }
  
   else if (wasButtonPressed == true){
        digitalWrite(ledPin, (isLedActive ? LOW: HIGH));
        isLedActive = !isLedActive;
        wasButtonPressed = false;
   }
}
