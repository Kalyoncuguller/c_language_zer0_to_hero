#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    char *str = (char *) malloc(100 * sizeof(char)); // allocate memory for string of size 100 characters (including null character) 
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("You entered: %s", str);
    return 0;

}
