#include <stdio.h>
#include <ctype.h>

int main()
{
    char messagein[200];
    char Morse[26][5] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                         ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                         "...","-","..-","...-",".--","-..-","-.--","--.."};
    printf("What is the message that you want to encode? \n");
    gets(messagein);
    for (int i = 0; i < 100; i++)
    {
        if (messagein[i] == '\0')
        {
            break;
        }
        else{
            if ((messagein[i] > 96) && (messagein[i] < 123)){
                int j = messagein[i] - 97;
                printf("%s ",Morse[j]);
            }
            else if((messagein[i] > 64) && (messagein[i] < 91)){
                int k = messagein[i] - 65;
                printf("%s ", Morse[k]);
            }
            else{
                printf("%c ",messagein[i]);
            }
        }
    }
    
}