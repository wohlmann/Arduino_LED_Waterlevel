
int ch = 0;
int adc_id = 0;
int HistoryValue = 0;
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int tDelay = 1000;

byte leds = 0;
void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready - Leonardo
}
void loop() 
{
      ch = 9;
      leds = 0;
      updateShiftRegister();
      Serial.println("Cleared");
      int value = analogRead(adc_id); // get adc value
      Serial.print("got value ");
      Serial.println(value);
      Serial.print("remain channel ");
      Serial.println(ch);
      //if(((HistoryValue>=value) && ((HistoryValue - value) > 10)) || ((HistoryValue<value) && ((value - HistoryValue) > 10)))
      //{
      if (value >= 100){
        ch = 0;
        Serial.print("is 100 ");
        Serial.print("channel is ");
        Serial.println(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
      if (value >= 200){
        ch = 1;
        Serial.print("is 200 ");
        Serial.print(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
      if (value >= 300){
        ch = 2;
        Serial.print("is 300 ");
        Serial.print(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
      if (value >= 400){
        ch = 3;
        Serial.print("is 400 ");
        Serial.print(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
      if (value >= 500){
        ch = 4;
        Serial.print("is 500 ");
        Serial.print(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
      if (value >= 600){
        ch = 5;
        Serial.print("is 600 ");
        Serial.print(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
      if (value >= 700){
        ch = 6;
        Serial.print("is 700 ");
        Serial.print(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
      if (value >= 800){
        ch = 7;
        Serial.print("is 800 ");
        Serial.print(ch);
        if (ch >= 0 && ch <= 7){
          Serial.print("switching ");
          Serial.println(ch);
          int led = ch - 0;
          bitSet(leds, ch);
          updateShiftRegister();
        }
      }
//      if (ch >= 0 && ch <= 7){
//      Serial.print("switching ");
//      Serial.println(ch);
//      int led = ch - 0;
//      bitSet(leds, ch);
//      updateShiftRegister();
      delay(tDelay);
      }
