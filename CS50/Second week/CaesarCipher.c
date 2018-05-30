#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* caesarisCaesari(char* word, int key);

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Sorry, but your don\'t enter comandline argument");
        return 1;
    }

    int keyForCipher = atoi("14");
    char* word = "hello";

    caesarisCaesari(word,keyForCipher);
}

char* caesarisCaesari(char* word, int key)
{
    char resultWord[strlen(word)];

    for( int i = 0, size = strlen(word); i < size ; i++)
    {
        resultWord[i] = (word[i] + key);

        if(!(isalpha(resultWord[i])))
        {
            if(resultWord[i] > 97 + 25)
            {
                resultWord[i] = abs(resultWord[i] - (97 + 25) + 97);
            }
            else if (resultWord[i] > 65 + 25)
            {
                resultWord[i] = abs(resultWord[i] - (65 + 25) + 65);
            }
        }
    }

    return resultWord;
}
