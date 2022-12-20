
//Hocam google'dan biraz yardım aldım

#include <stdio.h>
#include <math.h>

#define PI 3.14

void alanbul(float r, float *area) {
    *area = PI * r * r;
}

void cevrebul(float r, float *circum) {
    *circum = 2 * PI * r;
}


int main() {
    float r, area, circum;
    printf("çemberin yarıçapını girin: ");
    scanf("%f", &r);
    alanbul(r, &area);
    cevrebul(r, &circum);
    printf("dairenin alanı = %f \n", area);
    printf("dairenin çevresi = %f \n", circum);
    return 0;
}
