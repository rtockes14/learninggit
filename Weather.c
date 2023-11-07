#include <stdio.h>
#include <stdbool.h>

int main(){

float temp;
float userinput;
char answer;
bool sunny;

sunny = answer;

printf("\nPlease enter a temperature in farenheit: ");
scanf("%f", &temp);

printf("\nis it sunny outside?: ");
scanf("%c", &answer);

if(answer = 'n'){
    sunny = 0;
}
else{
    sunny = 1;
}

if(temp >= 0 && temp <= 30 && sunny == true){
    printf("the weather is pretty good");
}
else{
    printf("the weather is sharty");
    }

}