// BU programda adinizi yaziniz


#include "stdio.h"
#include "string.h"

int main() {
    int age;
    char name[15];
    printf("Enter your name \n");
    scanf("%s", name);
   printf("Enter your age \n");
    scanf("%d", &age);
    if (strcmp(name, "melisa") == 0 && age >= 18) {
        printf("Ohh,you are clever student!");
    } else {
        printf("it is not you!");
    }

    return 0;

}
