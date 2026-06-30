#include <cs50.h>
#include <stdio.h>

void meow(int n);
// Calls for the meow function.

int main(void)
{
    int v = get_int("How many repetitions? ");
    meow(v);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
