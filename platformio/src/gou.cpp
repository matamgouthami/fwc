#include <Arduino.h>
int P=0,Q=0,R=0;

int A;


//Code released under GNU GPL.  Free to use for anything.

void disp_7447(int A)

{

  digitalWrite(2, A);


}

// the setup function runs once when you press reset or power the board

void setup() {

    pinMode(2, OUTPUT);  

}


// the loop function runs over and over again forever

void loop() {

  A=(!P&&!Q&&!R) || (!P&&Q&&R) || (P&&!Q);

disp_7447(A);  

}


