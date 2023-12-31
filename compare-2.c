#include <stdio.h>

int main(void)
{
    int x;
    int y;
    
    printf("what's x?: ");
    scanf("%d", &x);

    printf("what's y?: ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is more than y\n");
    }
    else
    {
        printf("x is equal to y");
    }
}