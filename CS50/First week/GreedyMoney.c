#include <stdio.h>
#include <math.h>

float getPositiveFloat(void);

int main()
{
    int cents[4] = {25,10,5,1};
    int count = 0;
    float money = getPositiveFloat();

    while(1)
    {
        if(money == 0 || money < 0)
        {
            printf("Count:  %i\n",count);
            return;
        }
        else
        {
            for(int i = 0; i < 4;i++)
            {
                if(cents[i] <= money)
                {
                    money = floor(money - cents[i]);
                    count++;
                }
            }
        }
    }

    return 0;
}

float getPositiveFloat(void)
{
    float num;

    do
    {
        printf("Please enter positive float: ");
        scanf("%f",&num);
    }
    while(num <= 0);

    return num;
}
