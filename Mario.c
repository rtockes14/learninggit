#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void) 
{
    //get size of grid
    int n = get_size();

    //print grid of bricks
    print_grid(n);
}
    

//wut
int get_size(void)
    {
    int z;
    int n;
    do 
    {
    printf("Enter a size: ");
    scanf("%d", &n);
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("# ");
    }
        printf("\n");
    }
}
