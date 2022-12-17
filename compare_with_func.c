#include <tgmath.h>
#include "stdio.h"
#include  "string.h"
#include  "stdlib.h"
#include  "string.h"

void writeMyname(char *name, int age) { // function definition
    printf("My name is %s, and I am %d years old.", name, age); // function body
}

int main() {
    char name[20];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    writeMyname(name, age);

    if (strcmp(name, "Akif") == 0) {
        if (age == 36) {
            printf("|\nAkif is kind!");
        } else {
            printf("\nHe is now kind!");
        }
    } else {
        printf("He is the one");
    }
    return 0;
}
