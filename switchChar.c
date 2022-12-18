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
    
  
