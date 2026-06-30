#include <cs50.h>
#include <stdio.h>

void meow(void);
// Calls the actual function meow which is at the end of this program.

int main(void)
{
    int counter = get_int("How many repetitions? ");
    while (counter > 0)
    {
        meow();
        counter--;
    }

    int i = 0;
    int max = get_int("How many repetitions? ");
    for (int v = 0; v < max; v++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}
