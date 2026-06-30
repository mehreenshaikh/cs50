#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i=0; i<4; i++)
    {
        printf("?");
    }
    printf("\n");
    // Putting \n outside for loop results in question marks side by side AND $ of terminal on the next line.

    int n;
    // Declares the integer n but doesn't put anything inside of it because we're going to put stuff in it anyways.
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    // Checks if n is less than 0 and forces n to be greater than 0.

    for (int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    // Creates an n-by-n grid of bricks.
    }
}
