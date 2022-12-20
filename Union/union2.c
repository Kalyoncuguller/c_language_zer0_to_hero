#include <stdio.h>
#include <stdlib.h>

union information {
    int age;
    float grade_av;
    char name[20];
};

int main() {
    union information personal;
    printf("Enter an integer: ");
    scanf("%d", &personal.age);
    printf("Age: %d \n", personal.age);
    printf("Enter a float: ");
    scanf("%f", &personal.grade_av);
    printf("Grade avarage: %f \n", personal.grade_av);
    printf("Enter a string: ");
    scanf("%s", personal.name);
    printf("Name: %s \n", personal.name);
    return 0;
}
