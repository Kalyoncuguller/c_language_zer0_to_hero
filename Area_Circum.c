// To calculate the circumference of a circle, multiply the diameter of the circle with π (pi). 
// The circumference can also be calculated by multiplying 2×radius with pi (π=3.14).

#include"stdio.h"
#define pi 3.1415
int main(){
	float area,circum,r;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	area=pi*r*r;
	circum=2*pi*r*r;
	printf("Area of the circle: %.2f\n",area);
	printf("Circumference of the circle: %.2f",circum);
	
	return 0;
}
