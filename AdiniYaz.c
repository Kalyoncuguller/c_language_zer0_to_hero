#include <stdio.h>
#include <string.h>//for strcmp
#define size 20 

int main()
{
    int age;
    char name[size];
    char surname[size];
    
    
    printf("Enter your name");
    scanf("%s",name);
    
    printf("Enter your surname");
    scanf("%s",surname);
    
    printf("Enter your age");
    scanf("%d", &age);
    
    if (age == 20){
        printf("You are the best student!\n");
    }
    else{
        printf("Oh no, you're just a child!\n");
    }
    if (strcmp(name, "Güller") == 0 && strcmp(surname,"Kalyoncu") == 0) {
        printf("%s,You are the student I am looking for!\n",name);
        
    }
    else{
        printf("%s,Please go you don't fit my criteria!\n",name);
    }
    

    return 0;
}
