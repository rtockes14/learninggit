#include <stdio.h>
#include <string.h>


typedef struct
{
    char first[25];
    char last[25];
    double phone;
}
person;

person phonebook_arr[5];
double arr[5][5];

person get_info();

int main(void)
{
    int counter = 0;

    FILE *outptr = fopen("outfile.txt", "w");
    if (outptr == NULL)
    {
        printf("Could not open %s.\n", "outfile.txt");
        return 2;
    }

    printf("Please enter the info required: \n");

    // ask for 5 people to add to phonebookle
    for(int i = 0; i < 2; i++)
    {
        phonebook_arr[i] = get_info();
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            arr[i][j] = phonebook_arr[counter].phone;
            counter++;
        }
    }


        for(int j = 0; j < 5; j++)
        {
            fprintf(outptr, "[%s %s  -  %.lf] \n", phonebook_arr[j].first, phonebook_arr[j].last, phonebook_arr[j].phone);
        }
        fprintf(outptr, "\n");

    // fwrite(arr, sizeof(int), 5*5, outptr)
    
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                fprintf(outptr, "[%.lf] ", arr[i][j]);
            }
            fprintf(outptr, "\n");
        }
    

    fclose(outptr);

    return 0;
}

person get_info()
{
    person c;
    printf("\n\n");
    printf("Enter first name: \n");
    scanf("%s", c.first);
    printf("Enter last name: \n");
    scanf("%s", c.last);
    printf("Enter a phone number: \n");
    scanf("%lf", &c.phone);
    return c;
}