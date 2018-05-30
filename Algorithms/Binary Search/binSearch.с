#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int tests(int argc, char* argv[]);
int binSearch(int array[], int sizeArray,int value);

int main(int argc, char* argv[])
{
    if(tests(argc, argv) != 0)
    {
        return -1;
    }

    int array[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arraySize = sizeof(array) / sizeof(int);
    int value = argv[1];

    int result = binSearch(array, arraySize, value);

    printf("%i", result);
    free(result);
    return 0;
}

int tests(int argc, char* argv[])
{
    if(argc != 2)
    {
        return -1;
    }

    int size = sizeof(argv[1]) / sizeof(char*);

    for(int i = 0; i < size; i++)
    {
        if(!(isdigit(argv[1][i])))
        {
            return -1;
        }
    }

    return 0;
    free(size);
}

int binSearch(int array[], int sizeArray,int value)
{
    int lowInd = 0;
    int highInd = sizeArray - 1;

    while(lowInd <= highInd)
    {
        int midInd = floor((lowInd + highInd) / 2);
        int midEl = array[midInd];

        if(midEl == value)
        {
            return midInd;
        }
        if(midEl > value)
        {
            highInd = midInd - 1;
        }
        else
        {
            lowInd = midInd + 1;
        }
    }

    return -1;
}
