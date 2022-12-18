// "Bu yapı yazılım dilinde enum, enumaration ya da enum sabitleri olarak adlandırılır. Değişkenlerin alabileceği değerlerin sabit (belli) olduğu durumlarda programı daha okunabilir hale getirmek için kullanılır. Programda birçok değişkene tek tek sayısal değer vermek yerine "enum" kullanılabilir"
// (cc)


#include<stdio.h>

enum gender{man=0,women=1};

int main(){
    
    enum gender state;
    state=1;
    printf("The gender state is %d", state);
    return 0;
    
}
