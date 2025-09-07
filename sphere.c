#include <stdio.h>
#include <math.h>
int main(){
    float x = 0;
printf("enter the radius of sphere ");
scanf("%f",&x);
float pi = 3.14159;
float t = pow(x,2);
float g = pow(x,3);
float sa = 4*pi*t;
float volume = 4*g*pi/3;
printf("surface area of sphere is: %f\n",sa);
printf("volume of sphere is: %f",volume);
}