#include <stdio.h>
#include "cs50.h"
#include <string.h>


char arr[5][5];

typedef struct
{
    char name[5];
    int phone;
}
person;

person phonebook_arr[5];

person get_info();

int main(void)
{

    FILE *outptr = fopen("outfile.txt", "w");
    if (outptr == NULL)
    {
        printf("Could not open %s.\n", "outfile.txt");
        return 2;
    }

    // ask for 5 people to add to phonebook
    for(int i = 0; i < 5; i++)
    {
        printf("Please enter the info required: ");
        phonebook_arr[i] = get_info();
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            arr[i][j] = 'x';
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("[%s  %i] ", phonebook_arr[i].name, phonebook_arr[i].phone);
        }
        printf("\n");
    }

    // fwrite(arr, sizeof(int), 5*5, outptr)
    
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                fprintf(outptr, "%c", arr[i][j]);
            }
            fprintf(outptr, "\n");
        }
    

    fclose(outptr);

    return 0;
}

person get_info()
{
    person c;
    printf("Enter the details below \n");
    scanf("%s", c.name);
    scanf("%i", &c.phone);
    return c;
}