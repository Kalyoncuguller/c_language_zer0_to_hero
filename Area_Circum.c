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
