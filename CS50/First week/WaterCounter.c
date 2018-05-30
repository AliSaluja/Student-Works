#include <stdio.h>

int getPositiveNum(void);
void waterCounter(int userInput);

int main()
{
    int number = getPositiveNum();

    waterCounter(number);
}

int getPositiveNum(void)
{
    int num;

    do
    {
        printf("Please enter positive number: ");
        scanf("%i",&num);
    }
    while(num <= 0);

    return num;
}

void waterCounter(int userInput)
{
    int literInMinute = 6;
    int bottlesInMinute = 12;

    int resultLiter = literInMinute * userInput;
    int resultBottles = bottlesInMinute * userInput;

    printf("You used is:\n\n%i - liter of water\n\n%i - bottles of water\n\n",resultLiter,resultBottles);
}
