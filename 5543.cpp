#include <stdio.h>

int main(void)
{
    int highBurger, middleBurger, lowBuger;
    int sprite, coke;
    int minBurger = 100000, minVeberage = 100000;
    int setMenu;

    while (1)
    {
        if (highBurger < 100 || highBurger>2000)
        {
            scanf("%d", &highBurger);
        }
        else
        {
            break;
        }
    }

    if (minBurger > highBurger)
    {
        minBurger = highBurger;
    }

    while (1)
    {
        if (middleBurger < 100 || middleBurger>2000)
        {
            scanf("%d", &middleBurger);
        }
        else
        {
            break;
        }
    }

    if (minBurger > middleBurger)
    {
        minBurger = middleBurger;
    }

    while (1)
    {
        if (lowBuger < 100 || lowBuger>2000)
        {
            scanf("%d", &lowBuger);
        }
        else
        {
            break;
        }
    }

    if (minBurger > lowBuger)
    {
        minBurger = lowBuger;
    }

    while (1)
    {
        if (sprite < 100 || sprite>2000)
        {
            scanf("%d", &sprite);
        }
        else
        {
            break;
        }
    }

    if (minVeberage > sprite)
    {
        minVeberage = sprite;
    }

    while (1)
    {
        if (coke < 100 || coke>2000)
        {
            scanf("%d", &coke);
        }
        else
        {
            break;
        }
    }

    if (minVeberage > coke)
    {
        minVeberage = coke;
    }

    printf("%d", (minBurger + minVeberage) - 50);
}