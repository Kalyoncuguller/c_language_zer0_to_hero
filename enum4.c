#include "stdio.h"
#include "stdlib.h"

enum month {
    january = 1, february, march, april, may, june, july, august, september, october, november, december
};

int main() {
    enum month ay;
   ay=february;
    printf("%d", ay);
    return 0;
}

//enum and switch-case
#include <stdio.h>

enum months {January = 1,February,March,April,May,June,July,August,September,October,November,December} i;

int main(){
  int option;

  printf("Enter a number[1-12]: ");
  scanf("%d", &option);

  i = option;

  switch (i) {
    case January: printf("January");
       break;
    case February: printf("February");
       break;
    case March: printf("March");
       break;
    case April: printf("April");
       break;
    case May: printf("May");
       break;
    case June: printf("June");
       break;
    case July: printf("July");
       break;
    case August: printf("August");
       break;
    case September: printf("September");
       break;
    case October: printf("October");
       break;
    case November: printf("November");
       break;
    case December: printf("December");
       break;
    default:
        printf("Please enter numbers between 1 and 12");
  }
  
  return 0;
}
//output:
//Enter a number[1-12]: 4
//April
