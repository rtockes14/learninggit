#include <cs50.h>
#include <stdio.h>

int findstart(void);
int findend(void);

int main(void)
{

    // Prompt for start size
    int startingpop = findstart();

    // Prompt for end size
    int endingpop = findend();


    // Calculate number of years until threshold
    int years = 0;
    do
    {
        startingpop = startingpop + (startingpop/3) - (startingpop/4);
        years++;
    }
    while (startingpop < endingpop);

        printf("Years: %i\n", years);

        return 0;
}


int findstart(void)
    {
    int startingpop;
    do
    {
        startingpop = get_int("Enter the starting population of llamas: \n");
    }
    while (startingpop < 9);
    return startingpop;
    }

int findend(void)
    {
    int endingpop;
    do
    {
    endingpop = get_int("Enter the ending population of llamas: \n");
    }
    while (endingpop < 9);
    return endingpop;
    }

