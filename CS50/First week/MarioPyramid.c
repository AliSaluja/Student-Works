#include <stdio.h>

char getSymbol(void);
int getPositiveNumber(void);
int pyramid(char symbol,int height);

int main()
{
    printf("Please enter symbol: ");
    char symbol = getSymbol();

    int height = getPositiveNumber();

    pyramid(symbol,height);

    return 0;
}

char getSymbol(void)
{
    char symbol;
    scanf("%c",&symbol);
    return symbol;
}

int getPositiveNumber(void)
{
    int num;

    do
    {
        printf("Please enter height of pyramid: ");
        scanf("%i",&num);
    }
    while(num <= 0);

    return num;
}

int pyramid(char symbol,int height)
{
    int i, j, k;

    for(i = 1; i <= height; i++)
    {
        for(j = 1; j <= height - i; j++)
            printf(" ");

        for(k = 1; k <= i; k++)
            printf("%c",symbol);

        printf("\n");
    }
}
