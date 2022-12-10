// write the name of the person you like
// if the name is yours print(Hurra this is me)
// This is my bff. 

// Good Luck
#include <stdio.h>

int main()
{
   char name[50];
   
  printf("Enter the name of the person you like:");
  scanf("%s",name);
  
  if(name == "Güller"){
      printf("Hurra this is me!");
  }
  else{
      printf("This is my bff");
  }

    return 0;
}
