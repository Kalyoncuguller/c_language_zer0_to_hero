

#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    int c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("a b ye boldungunde kalan = %d \n",c);
    
    return 0;
}

//Switch-case ile 4 işlem
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   char op;
   float num1,num2,result;


   printf("\nChoose an operator(+,-,*,/):");
   scanf("%c",&op);

   printf("\nEnter first number:");
   scanf("%f",&num1);
   
   printf("\nEnter second number:");
   scanf("%f",&num2);


   switch(op)
   {
     case '+':
       result=num1+num2;
       break;
     case '-':
        result=num1-num2;
        break;
     case '*':
       result=num1*num2;
       break;
     case '/':
        result=num1/num2;
        break;
    default :
        printf ("\nYou entered the wrong operator!");
   }

   printf("\nResult=%.2f",result);

   return 0;
}


//if-else ile dört işlem
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,choice;
    float result;
    printf("Enter 2 numbers:\n");
    scanf("%d\n%d",&num1,&num2);
    printf("1 Addition:\n");
    printf("2 Extraction:\n");
    printf("3 Division:\n");
    printf("4 Multiplication:\n");
    printf("Select the process you want to do:");
    scanf("%d",&choice);
        if (choice==1)
            result=num1+num2;
        else if (choice==2)
            result=num1-num2;
        else if (choice==3)
            result=num1/num2;
        else if (choice==4)
            result=num1*num2;
        else
            {
            printf("You made the wrong choice!");
            exit(0);
            }
   printf("Result=%f",result);
  return 0; 
}
