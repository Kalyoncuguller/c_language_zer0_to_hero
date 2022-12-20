#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char dream[100];
    printf("Enter your dreams:\n");
    scanf("%[^\n]s",dream);
    
    int len = strlen(dream);
    if(strlen(dream)==0){
        printf("I can't believe it, your situation is so sad.");
    }
    else{
        printf("Never give up on your dreams");
    }
    return 0 ;
}
