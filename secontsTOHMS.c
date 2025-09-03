/*
   program converts the given numeber of seconds to HMS

   65 seconds -> 1 hour, 1 minute, 30 seconds
   3690 seconds -> 1 hour, 1 minute, 30 seconds
  
*/
 
#include <stdio.h>

int main(void) {
  int seconds = 0;

// Getting seconds
puts("Enter the nummber of seconds");
scanf("%d", &seconds);

if (seconds < 0) {
   puts(seconds to 
   
// Calculate the numeber of minutes
int minutes = seconds / 60;
int remaining_seconds = seconds % 60; // seconds - (seconds / 60 * 60)

// Calculate the number of hours and change the output
int hours = minutes / 60;
int remaining_minutes = minutes % 60;

// Selection statement
/*
<
>
<=
>=
*/
if (seconds < 0) {
    puts("seconds cannot be negative");

}
   
if (second >= 0) {
// print the result
printf("%d seconds is %d minutes and %d seconds\n", seconds, minutes, remaining_seconds);
printf("%d seconds is %d minutes and %d seconds\n", seconds, 
                                                    hours,                                              
                                                    remaining_minutes, 
                                                    remaining_seconds);

}

 return 0;
}
