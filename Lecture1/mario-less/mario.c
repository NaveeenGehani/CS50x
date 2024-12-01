#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gets input and checks if it is greater than 1 and less than 9
    int n;
    do
    {
        n = get_int("enter a number: ");
    }
    while (n < 1 || n > 8);
    // prints n rows
    for (int i = 0; i < n; i++)
    {
        // prints # and spaces
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
