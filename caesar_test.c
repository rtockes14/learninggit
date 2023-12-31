#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input, int key);

char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(int argc, string argv[])
{
    // Convert argv[1] from a `string` to an `int`
    int key = argv[1][0];
    string input;

    // conditional that reminds user to input correct value
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        // plaintext -- takes user input string
        input = get_string("plaintext: ");
    }

    //printf("key: %c\n", key);

    printf("ciphertext: %s", replace(input, key));



// conditional that run ciphertext on character if input 'isalpha'
// ciphertext: -- prints ciphertext per rotational key

}

string replace(string input, int key)
{
    int length = strlen(input);
    int text[length];

    for (int i = 0; i < length; i++)
    {
        text[i] = input[i + key];
        if (key > 26)
        {
            i = 0;
        }
    }
    return input;
}

