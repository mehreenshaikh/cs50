#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    // If nothing to draw (aka base case)

    draw (n - 1);
    // Prints pyramid of height n - 1

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    // Prints one more row
}
