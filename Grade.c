#include <stdio.h>
#include <math.h>

int main(){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("perfect score!\n");
            break;
        case 'B':
            printf("you did good\n");
            break;
        case 'C':
            printf("you did okay\n");
            break;
        case 'D':
            printf("At least it's not an F\n");
            break;
        case 'F':
            printf("you failed mf\n");
            break;
        default:
            printf("Please enter only valid grades\n");


    }

return 0;

}