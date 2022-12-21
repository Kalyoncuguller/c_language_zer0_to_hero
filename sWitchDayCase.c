
#include <stdio.h>

int main()
{
    int day;
    printf("Enter a day = ");
    scanf("%d", &day);
     switch(day) {
         
         case 1: printf("M");
         break;
         case 2: printf("T");
         break;
         case 3: printf("W");
         break;
         case 4: printf("T");
         break;
         case 5: printf("F");
         break;
         case 6: printf("S");
         break;
         case 7: printf("S");
         break;
         default:
                printf("Fun day");
                break; 
     }
    return 0;
}

//enum ve switch-case ile günler

#include <stdio.h>

enum days { Monday, Tuesday, Wednesday, Thursday,Friday,Saturday,Sunday }  i;

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
