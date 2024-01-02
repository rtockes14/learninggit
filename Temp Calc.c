#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("Is the temperature in (f) or(c)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temp in Celcius: ");
        scanf("%f", &temp);

        temp = (temp * 9/5) + 32;
        printf("\nThe temperatur is %.1f degrees Farenheit", temp);



    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);

        temp = ((temp - 32) * 5 / 9);
        printf("\nThe temperatur is %.1f degrees Celcius", temp);
    }
    else{
        printf("Please enter a valid character");

    }

    return 0;

}