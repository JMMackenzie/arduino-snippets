/*This code is written to simulate any alphabetic or numeric sentence in morse.
  Write the desired string into the morse[] array and it will be called in a
  loop.*/

/********************************MODIFY***************************************/

/*Modify this time constant to speed up or slow down morse*/
#define time 100

/*See error() for more information*/
#define error_gap 10

/*Modify this char array to represent the words you wish to send*/
char morse[] ="cq cq cq hello";

/***************************DO NOT MODIFY BELOW ******************************/

/*Dit: Inter word space included*/
void dit(){
  digitalWrite(led, HIGH);
  delay(time);
  digitalWrite(led, LOW);
  delay(3 * time);
}

/*Dah: Inter word space included*/
void dah(){
  digitalWrite(led, HIGH);
  delay(3 * time);
  digitalWrite(led, LOW);
  delay(3 * time);
}

/*Error: Make a quick 3-beep series to represent an unsupported character*/
void error(){
  int i;
  for(i = 0; i < 3; i++){
    digitalWrite(led, HIGH);
    delay(error_gap);
    digitalWrite(led, LOW);
  }
   delay(3 * time);
}

/*Will make the corresponding character via switch statement - An ugly yet
  efficient and portable method. Supports a-z, 0-9, and space ' '*/
void character(char ch){
  switch (ch){
    /*Note that space will delay for 4 * time, since a dit or a dah will delay
      3 * time - a total of 7 * time between words. Modify if needed.*/
    case ' ':
      delay(4 * time);
      break;

    case '1':
      dit();
      dah();
      dah();
      dah();
      dah();
      break;

    case '2':
      dit();
      dit();
      dah();
      dah();
      dah();
      break;

    case '3':
      dit();
      dit();
      dit();
      dah();
      dah();
      break;

    case '4':
      dit();
      dit();
      dit();
      dit();
      dah();
      break;

    case '5':
      dit();
      dit();
      dit();
      dit();
      dit();
      break;

    case '6':
      dah();
      dit();
      dit();
      dit();
      dit();
      break;

    case '7':
      dah();
      dah();
      dit();
      dit();
      dit();
      break;

    case '8':
      dah();
      dah();
      dah();
      dit();
      dit();
      break;

    case '9':
      dah();
      dah();
      dah();
      dah();
      dit();
      break;

    case '0':
      dah();
      dah();
      dah();
      dah();
      dah();
      break;

    case 'a':
      dit();
      dah();
      break;

    case 'b':
      dah();
      dit();
      dit();
      dit();
      break;

    case 'c':
      dah();
      dit();
      dah();
      dit();
      break;

    case 'd':
      dah();
      dit();
      dit();
      break;
    
    case 'e':
      dit();
      break;

    case 'f':
      dit();
      dit();
      dah();
      dit();
      break;

    case 'g':
      dah();
      dah();
      dit();
      break;

    case 'h':
      dit();
      dit();
      dit();
      dit();
      break;

    case 'i':
      dit();
      dit();
      break;

    case 'j':
      dit();
      dah();
      dah();
      dah();
      break;

    case 'k':
      dah();
      dit();
      dah();
      break;

    case 'l':
      dit();
      dah();
      dit();
      dit();
      break;

    case 'm':
      dah();
      dah();
      break;

    case 'n':
      dah();
      dit();
      break;

    case 'o':
      dah();
      dah();
      dah();
      break;

    case 'p':
      dit();
      dah();
      dah();
      dit();
      break;

    case 'q':
      dah();
      dah();
      dit();
      dah();
      break;

    case 'r':
      dit();
      dah();
      dit();
      break;

    case 's':
      dit();
      dit();
      dit();
      break;

    case 't':
      dah();
      break;

    case 'u':
      dit():
      dit();
      dah();
      break;

    case 'v':
      dit();
      dit();
      dit();
      dah();
      break;

    case 'w':
      dit();
      dah();
      dah();
      break;

    case 'x':
      dah();
      dit();
      dit();
      dah();
      break;

    case 'y':
      dah();
      dit();
      dah();
      dah();
      break;

    case 'z':
      dah();
      dah();
      dit();
      dit();
      break;
    
    default:
      error();
      break;
  }
}

/*Pin 13 has an LED connected on most Arduino boards.*/
int led = 13;

/*the setup routine runs once when you press reset*/
void setup() {                
  /*initialize the digital pin as an output*/
  pinMode(led, OUTPUT);     
}

/*Loop over string and then wait 100 * time seconds before looping again.*/
void loop() {
  /*Local declarations*/
  int count;
  for(count = 0; count < morse.length(); count++){
    character(charAt(count));
  }
  digitalWrite(led, LOW);
  delay(100 * time);
}

