#include <cs50.h>
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
// Lines call upon later functions so that I can still put the main one at/near the top.

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("Addition: %i\n", add(x, y));
    printf("Subtraction: %i\n", subtract(x, y));

    float z = (float) x / (float) y;
    // (float) typecasts x and y from integers to floats, preventing truncuation error.
    printf("Division: %.3f\n", z);
    // Rounds to 3 decimal places.
}

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
// Basically return_value function_name(parameter1, parameter2)
// Void in the place of return_value means there is no return value. Same thing with parameters.
