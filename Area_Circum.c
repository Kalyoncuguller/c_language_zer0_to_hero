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

//Finding the Area and Circumference of a Circle Using  Function
#include <stdio.h>
#define pi 3.1415

float area(float radius){
     float result;
     result = pi * radius * radius;
     return  result;
}
float circum(float radius){
     float result;
     result = 2 * pi * radius;
     return  result;
}

int main(){
     int circleRadius,choice;

     printf("Enter the radius of the circle: ");
     scanf("%d",&circleRadius);

     printf("To find the area of 1 circle\nTo find the circumference of 2 circles\nYour choice: ");
     scanf("%d",&choice);

     if(choice == 1)
          printf("Area of the circle: %f \n",area(circleRadius));
     else if(choice == 2) 
          printf("Circumference of the circle: %f", circum(circleRadius));
     else
          printf("You made the wrong choice!");
    return 0;      
}

//output:
//Enter the radius of the circle: 5
//To find the area of 1 circle
//To find the circumference of 2 circles
//Your choice: 1
//Area of the circle: 78.537498 

//output:
//Enter the radius of the circle: 5
//To find the area of 1 circle
//To find the circumference of 2 circles
//Your choice: 2
//Circumference of the circle: 31.415001
