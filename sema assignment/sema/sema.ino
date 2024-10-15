// no libraries to include.

// Declaring and assigning LEDs pins of the uno.
int LED_5 = 2;
int LED_4 = 3;
int LED_3 = 4;
int LED_2 = 5;
int LED_1 = 6;

// Declaring and assigning push Buttons pins of the Uno.
int BUTTON_5 = 7;
int BUTTON_4 = 8;
int BUTTON_3 = 9;
int BUTTON_2 = 10;
int BUTTON_1 = 11;


int BUZZER = 12;  // Declaring and assigning Buzzer an Arduino pin.

int press_count=0;  // Declaring and assigning variable for storing the number of button presses.

boolean key_pressed = false;  // Declaring a frag to indicate that a button is pressed.


void setup() {
  // Declaring LED pins as OUTPUT pin.
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);

  // Declaring Button pins as INPUT pins and activating their pullup Resistors 
  // The buttons function as active LOW. (this elliminates the use of external pull up resistors)
  pinMode(BUTTON_1,INPUT_PULLUP);
  pinMode(BUTTON_2,INPUT_PULLUP);
  pinMode(BUTTON_3,INPUT_PULLUP);
  pinMode(BUTTON_4,INPUT_PULLUP);
  pinMode(BUTTON_5,INPUT_PULLUP);

  //Declaring the buzzer pin an OUTPUT pin
  pinMode(BUZZER,OUTPUT);
}

void loop() {
  

   key_pressed = false; // Reseting key_pressed frag to false(no one has pressed the button yet).


   // Checking for button_1 state, turning on the LED_1 and turn the key_pressed frag to true if pressed(LOW).
   if(digitalRead(BUTTON_1)==LOW ){
     digitalWrite(LED_1,1);
     key_pressed = true;
   }

   // Checking for button_2 state, turning on the LED_2 and turn the key_pressed frag to true if pressed(LOW).
   if(digitalRead(BUTTON_2)==LOW ){
     digitalWrite(LED_2,1);
     key_pressed = true;
   }

   // Checking for button_3 state, turning on the LED_3 and turn the key_pressed frag to true if pressed(LOW).
   if(digitalRead(BUTTON_3)==LOW ){
      digitalWrite(LED_3,1);
      key_pressed = true;
   }

   // Checking for button_4 state, turning on the LED_4 and turn the key_pressed frag to true if pressed(LOW).
   if(digitalRead(BUTTON_4)==LOW ){
     digitalWrite(LED_4,1);
     key_pressed = true;
   }

   // Checking for button_5 state, turning on the LED_5 and turn the key_pressed frag to true if pressed(LOW).
   if(digitalRead(BUTTON_5)==LOW ){ 
     digitalWrite(LED_5,1);
     key_pressed = true;
   }

   // Delaying the On state of any activated LED for 7s and increamenting the press_count by 1 count.
   if(key_pressed == true){
     delay(7000);
     press_count ++;
   }

   // Turning  any activated LED Off after 7s. 
    digitalWrite(LED_1,0);
    digitalWrite(LED_2,0);
    digitalWrite(LED_3,0);
    digitalWrite(LED_4,0);
    digitalWrite(LED_5,0);

   // Activating the buzzer for 5s after 10 presses on the Push button.
   if(press_count == 10){
     tone(BUZZER,200);
     delay(5000);
     noTone(BUZZER);
     press_count = 0;
   }

}

