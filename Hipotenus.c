// Hipotenüsü dik kenarlardan birinin uzunluğuna bağlı olarak hesaplamak için sadece dik kenar uzunluğunu √2 ile çarp. 
// Bu oranı bilmek özellikle sınav veya ödev sorusunda kenar uzunlukları tam sayı yerine değişkenler cinsinden verdiğinde kullanışlıdır.
// fonksiyon ile yapılmıştır

#include <tgmath.h>
#include "stdio.h"
#include  "string.h"
#include  "stdlib.h"
#include  "string.h"

void hypotenuse(int kenar1, int kenar2) {
    float sonuc;
    sonuc = sqrt(kenar1 * kenar1 + kenar2 * kenar2);
    printf("Hipotenüs: %f", sonuc);

}

int main() {
    int kenar1, kenar2;
   
    printf("Enter the value of kenar 1 : ");
    scanf("%d", &kenar1);
    printf("Enter the value of kenar 2 : ");
    scanf("%d", &kenar2);
    hypotenuse(kenar1, kenar2);


}
