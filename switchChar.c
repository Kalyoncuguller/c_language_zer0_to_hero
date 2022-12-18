#include "stdio.h"
#include "stdlib.h"


int main() {
char day;
printf("Enter a day: ");
scanf("%c", &day);
switch (day) {
    case 's':
        printf("Sunday");
        break;
    case 'm':
        printf("Monday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'w':
        printf("Wednesday");
        break;
    case 'h':
        printf("Thursday");
        break;
    case 'f':
        printf("Friday");
        break;
    case 'a':
        printf("Saturday");
        break;
    default:
        printf("Invalid day");
}
      return 0;
}



//with enum

#include <stdio.h>

enum days { Monday, Tuesday, Wednesday, Thursday,Friday,Saturday,Sunday } i;

int main(){
  int option;

  printf("Enter a number[0-6]: ");
  scanf("%d", &option);

  i = option;

  switch (i) {
    case Monday: printf("Monday");
       break;
    case Tuesday: printf("Tuesday");
       break;
    case Wednesday: printf("Wednesday");
       break;
    case Thursday: printf("Thursday");
       break;
    case Friday: printf("Friday");
       break;
    case Saturday: printf("Saturday");
       break;
    case Sunday: printf("Sunday");
       break;
    default:
        printf("Please enter numbers between 0 and 6");
  }
  
  return 0;
}

//output:
//Enter a number[0-6]: 4
//Friday
    
  
