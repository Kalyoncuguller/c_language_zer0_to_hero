
// typedef with array
#include <stdio.h>

typedef int Arr[5];


int main()
{
Arr temp = {10, 20, 30, 40, 50};
printf("typedef using an array\n");
	
for (int i = 0; i < 5; i++)
{
	printf("%d ", temp[i]);
}
return 0;
}
