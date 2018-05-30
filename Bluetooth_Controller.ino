char command;
String string;

  void setup()  //insert your inputs or outputs here as required to accomodate your project
  {
     pinMode(2,OUTPUT);
     pinMode(3,OUTPUT);
     pinMode(4,OUTPUT);
     pinMode(5,OUTPUT);

    Serial.begin(9600);
    
  }

  void loop()
  {
    if (Serial.available() > 0) 
    {string = "";}
    
    while(Serial.available() > 0)
    {
      command = ((byte)Serial.read());
      
      if(command == ':')
      {
        break;
      }
      
      else
      {
        string += command;
      }
      
      delay(1);
    }
    
    if(string == "F")//Forward or other command
    {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
       Serial.println(string);
    }
    
    if(string =="B")//Back or other command
    {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
        Serial.println(string);
    }
    
    if(string =="R")//Turn Right or other command
    {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
        Serial.println(string);
    }
    
    if(string =="L")//Turn Left or other command
    {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
        Serial.println(string);
    }
    
    if(string =="S")//Stop or other command
    {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
        Serial.println(string);
    }
    
 }

 
