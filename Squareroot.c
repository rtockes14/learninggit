#include <stdio.h>
#include <math.h>

int main(){

double number;
double square;

printf("input the number you wish to square\n");
scanf("%lf", &number);

square = sqrt(number);

printf("square root of %.2lf is %.2lf", number, square);


return 0;

}