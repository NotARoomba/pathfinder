int BTN1 = D29;
int BTN2 = D28;
int BTN3 = D27;

int LED1 = D0;
int LED2 = D7;
int LED3 = D6;


void setup() {
  // put your setup code here, to run once:
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  long startTime = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  long btn1time = 0;
  long btn2time = 0;
  long btn3time = 0;

  if (digitalRead(BTN1) == HIGH) {
    btn1time = millis();
    digitalWrite(LED1, HIGH);
  } else {
    digitalwrite(LED1, LOW);
  }
  if (digitalRead(BTN2) == HIGH) {
    btn2time = millis();
  }

  if (abs(btn2time - btn1time) <= 2000) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalwrite(LED2, LOW);
  }

   if (digitalRead(BTN3) == HIGH) {
    btn3time = btn3time + 1; 
    // btn3time +=1;
    // btn3time++;

  } else {
    btn3time = 0;
  }


  if (btn3time >= 800) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalwrite(LED3, LOW);
  }
}
