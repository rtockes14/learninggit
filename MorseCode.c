#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define alphabet 26

char Morse[26][5] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                         ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                         "...","-","..-","...-",".--","-..-","-.--","--.."};

void encode(char *messageout);
void decode(char *messagein);
                         
int main()
{
    //char messagein[200];
    char *messagein;
    messagein = malloc(sizeof(1));

    
    //printf("What is the message that you want to encode? \n\n");
    printf("What is the message you want to decode? \n\n");
    //gets(messagein);
    scanf("%s", &messagein);

    if (messagein == NULL)
    {
        printf("That string was too long");
    }
    else{
        printf("this is the string %c\n", messagein);
    }

    //decode(messagein);

    //free(messagein);
}

void encode(char *messageout)
{
    int j = strlen(messageout);
    for (int i = 0; i < j; i++)
    {
        if (messageout[i] == '\0')
        {
            break;
        }
        else{
            if ((messageout[i] > 96) && (messageout[i] < 123)){
                int j = messageout[i] - 97;
                printf("%s ",Morse[j]);
            }
            else if((messageout[i] > 64) && (messageout[i] < 91)){
                int k = messageout[i] - 65;
                printf("%s ", Morse[k]);
            }
            else{
                printf("%c ",messageout[i]);
            }
        }
    }
    printf("\n\n\n");
}

void decode(char *messagein)
{
    // store input here
    char morseCharacter[5];
    char actualWord[5];

    for (int j = 0; j < strlen(messagein); j++)
    {
        actualWord[j] = messagein[j];
    }

    printf("%s\n\n\n", actualWord);

/*
    // take user input in the form of morse code -- *messagein

    // store input in a variable char *(string) ============= *messagein

    // compare input string to every morse code string in array 'Morse[]'
    for (int i = 0; i < alphabet; i++)
    {
        // if they user input matches the same string in the Morse[] array, add i of 'Morse[i] to the start of the letters in ascii table (+96)
        if (strcmp(messagein, Morse[i]) == 0)
        {
            printf("a match");
            int n = i;

            char letter = i + 96;
        }
    }

    // print the letter -- ex. 'a'
    printf("%c, letter");
    */


}


/*
    int length = strlen(messagein);
    for (int i = 0; i <= j; i++)
    {    
        if (messagein[i] == '\0')
        {
            //store length of morse character in a variable to advance through long string later

            //if string matches morse character add number in morse array to convert to letter
            for (int k = 0; k < )
            if (strcmp(Morse[i], messagein) == 0)
            {
                // iterate over each char stored in 'morse character
                for (int j  = 0; j < length; j++)
                {
                    actualWord[j] = actualWord[j] + 97;
                }
            }   
            break;
        }
        else 
        {
            // store characters in a bite-size array untill you reach space
            actualWord[i] = messagein[i];
        }  
    }
    
    printf("%s ",actualWord);
    */



/*

            if (messagein[i]==' ')
            {
*/

/*
// take user input in the form of morse code

// store input in a variable char *(string) ============= *messagein

// compare input string to every morse code string in array 'Morse[]'
for (int i = 0; i < alphabet; i++)
{
    // if they user input matches the same string in the Morse[] array, add i of 'Morse[i] to the start of the letters in ascii table (+96)
    if (strcmp(*messagein, Morse[i]) == 0)
    {
        int n = i;

        char letter = i + 96;
    }
}
*/






// if they user input matches the same string in the Morse[] array, add i of 'Morse[i] to the start of the letters in ascii table (+96)










//           =---------------   or ---------------=
// if they are a match, store number of current element in array and use that same number to print the number in an array of letters