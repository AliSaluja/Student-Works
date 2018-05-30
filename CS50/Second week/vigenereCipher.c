#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int tests(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    if(tests(argc,argv))
    {
        return 1;
    }

    char* word = "dragonAge";
    char* key = argv[1];

    int wordSize = strlen(word);
    int keySize = strlen(key);

    int j = 0;
    int k = 0;
    char result[wordSize];

    for(int i = 0; i < wordSize; i++)
    {
        if(isalpha(key[i]))
        {
            j = j % keySize;
            if(isupper(key[j]))
            {
                k = key[j] - 'A';
            }
            else
            {
                k = key[j] - 'a';
            }
        }
        if(isupper(word[i]))
        {
            result[i] = (word[i] - 'A' + k) % 25;
            result[i] = result[i] + 'A';
            j++;
            printf("%c",result[i]);
        }
        else
        {
            result[i] = (word[i] - 'a' + k) % 25;
            result[i] = result[i] + 'a';
            j++;
            printf("%c",result[i]);
        }
    }

    return 0;
}

int tests(int argc, char* argv[])
{
    if(argc != 2)
    {
        return 1;
    }
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if(!(isalpha(argv[1][i])))
        {
            return 1;
        }
    }
}


