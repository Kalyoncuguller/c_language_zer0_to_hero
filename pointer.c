#include <stdio.h>

int main()
{
  int var =15; // int bir işaretçi ve değişken bildirimi
  int *ptr;
  ptr = &var;    // id değişken adresini ip işaretçisine atar.

  // Değişken adını kullanarak id değişken değerini ekrana yazar.
  printf("var değişken değeri: %d\n", var);

  // İşaretçi kullanarak id değişken değerini ekrana yazar.
  printf("var değişken değeri: %d\n", *ptr);

  // Değişken referansını kullanarak id değişken adresini ekrana yazar.
  printf("var değişken bellek adresi: %p\n", &var);

  // İşaretçi adını kullanarak id değişken adresini ekrana yazar.
  printf( "var değişken bellek adresi: %p", ptr);

  return 0;
}
