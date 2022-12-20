// union

#include <stdio.h>
#include <stdlib.h>

union data {
    int sayi;
    float ondalik;
    char yazi[20];
};

int main() {
    union data veri;
    printf("Enter an integer: ");
    scanf("%d", &veri.sayi);
    printf("Sayi: %d \n", veri.sayi);
    printf("Enter a float: ");
    scanf("%f", &veri.ondalik);
    printf("Ondalik: %f \n", veri.ondalik);
    printf("Enter a string: ");
    scanf("%s", veri.yazi);
    printf("Yazi: %s \n", veri.yazi);
    return 0;
}
