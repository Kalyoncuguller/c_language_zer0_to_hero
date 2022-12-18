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
