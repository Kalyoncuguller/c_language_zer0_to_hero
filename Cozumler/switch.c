// match the days of the week using switchcase in c and enum 


#include <stdio.h>
#include <stdlib.h>

enum days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main(){
    enum days day;
    
    printf("1-7 aralığında bir değer girin: ");
    scanf("%d", &day);
    switch (day){
        case Monday:
            printf("Monday");
            break;
        case Tuesday:
            printf("Tuesday");
            break;
        case Wednesday:
            printf("Wednesday");
            break;
        case Thursday:
            printf("Thursday");
            break;
        case Friday:
            printf("Friday");
            break;
        case Saturday:
            printf("Saturday");
            break;
        case Sunday:
            printf("Sunday");
            break;
        default:
            printf("operatör hatası");
    }
    return 0;
}
