#include <cs50.h>
#include <stdio.h>

int get_cents(void);
// int get_quarters(owedCents);
int coins = 0;

int main(void)
{
    int cents = get_cents();
    for(int i = 0; i <= cents; i++) {
        if(cents >= 25) {
            coins++;
            cents = cents - 25;
        } else if (cents >= 10) {
            coins++;
            cents = cents - 10;
        } else if(cents >= 5) {
            coins++;
            cents = cents - 5;
        } else {
            coins = coins + cents;
            cents = 0;
        }
    }
    printf("%i coins\n", coins);
}

int get_cents(void)
{
    int owedCents;
    do {
        owedCents = get_int("Enter the change owed: ");
    }
    while(owedCents < 1 || owedCents > 99);
    return owedCents;
}


/*
in the above code, the for-loop isn't efficient. The variable i isn't related to cents so it is inefficient.
here While-loop should be used to make it more efficient, it will run till the cents == 0, not unnecessary.
*/
