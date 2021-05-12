//Emisor
int estOn = digitalRead(8);
int estOff = digitalRead(9);
 void setup() 
  {
    Serial.begin(9600); 
    pinMode(8, INPUT_PULLUP);  
    pinMode(9, INPUT_PULLUP);  
  }
  
  void loop()
  {
    int estOn = digitalRead(8);
int estOff = digitalRead(9);
        if (estOn == 0) 
    {                                
      Serial.print("1");
    } 
    else if (estOff == 0)
    {                            
      Serial.print("2");
    }
    delay(100);
  }
