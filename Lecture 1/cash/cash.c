#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int find_coins(void);

int coins = 0;

int main()
{
    // prints coins
    int nCoins = find_coins();
    printf("%i coins\n", nCoins);
}

// get cents from the user
int get_cents(void)
{
    int owedCents;
    do
    {
        owedCents = get_int("Enter the change owed: ");
    }
    while (owedCents < 1);
    return owedCents;
}

// find the least number of coins
int find_coins(void)
{
    // get cents and stores in a variable cents
    int cents = get_cents();
    while (cents > 0)
    {
        // checks for quarter (25c)
        if (cents >= 25)
        {
            cents = cents - 25;
            coins++;
        }
        // checks for dimes (10c)
        else if (cents >= 10)
        {
            cents = cents - 10;
            coins++;
        }
        // checks for nickels (5c)
        else if (cents >= 5)
        {
            cents = cents - 5;
            coins++;
        }
        // checks for pennies (1c)
        else
        {
            coins = coins + cents;
            cents = 0;
        }
    }
    return coins;
}


/*
this program is efficient as well as modular. in the above code problem is broke down into small parts --> functions for modularity and maintainaility, making it easier to read and easier to change code instea of changing it at many places.
it runs till cents == 0, it doesn't runs more than necessary.
*/
