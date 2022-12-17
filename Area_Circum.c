// To calculate the circumference of a circle, multiply the diameter of the circle with π (pi). 
// The circumference can also be calculated by multiplying 2×radius with pi (π=3.14).

#include <stdio.h>
#define pi 3.1415

int main(){
    int r;
    int area, circum;
    printf("Enter radius please ");
    scanf("%d",&r);
    
    area= pi*r*r;
    circum=2*pi*r;
    printf("The area is %d and the circum is %d",area,circum);
    return 0;
    
}
