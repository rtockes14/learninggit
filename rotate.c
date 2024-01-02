#include <stdio.h>

int arr[3][3] = { 
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
            };

int main(void)
{

    FILE *outptr = fopen("outfile.txt", "w");
    if (outptr == NULL)
    {
        printf("Could not open %s.\n", "outfile.txt");
        return 2;
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            fprintf(outptr, "[%i]", arr[i][j]);
        }
        fprintf(outptr, "\n");
        }

    void rotate();

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            fprintf(outptr, "[%i]", arr[i][j]);
        }
        fprintf(outptr, "\n");
        }

    fclose(outptr);

    return 0;
}

