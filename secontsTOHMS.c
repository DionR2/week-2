/*
   program converts the given numeberof seconds to HMS

   65 seconds -> 1 hour, 1 minute, 30 seconds
   3690 seconds -> 1 hour, 1 minute, 30 seconds
  
*/
 
#include <stdio.h>

int main(void) {
  int seconds = 0;

// Getting seconds
puts("Enter the nummber of seconds");
scanf("%d", &seconds);

// Calculate the numeber of minutes
int minutes = seconds / 60;
int remaining_seconds = seconds
