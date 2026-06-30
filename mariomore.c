#include <cs50.h>
#include <stdio.h>

void leftrow(int length, int max);
void print_row(int length);
void print_between(void);

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1);

    for (int i = 0; i < h; i++)
    {
        leftrow(i + 1, h);
        print_between();
        print_row(i + 1);
    }
}

void leftrow(int length, int max)
{
    for (int k = max - length; k > 0; k--)
    {
        printf(" ");
    }
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
}

void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_between(void)
{
    printf("  ");
}
