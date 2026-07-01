#include<Keypad.h>
const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]={{'1','2','3','A'},{'4','5','6','B'},{'7','8','9','C'},{'*','#','0','D'}};
byte rowpins[ROWS]={9,8,7,6};
byte colpins[COLS]={5,4,3,2};
Keypad keypad=Keypad(makeKeymap(keys),rowpins,colpins,ROWS,COLS);
void setup() {
  Serial.  begin(9600);// put your setup code here, to run once:

}

void loop() {
  char key=keypad.getKey();
  if(key){
    Serial.println("keypressed");
    delay(1000);
  }
    Serial.println(key);
    // put your main code here, to run repeatedly:

}
