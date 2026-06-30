#include <cs50.h>
#include <stdio.h>

bool check(float x);
bool valid_triangle(float a, float b, float c);

int main(void)
{
    float a = get_float("Enter a real number: ");
    float b = get_float("Enter a real number: ");
    float c = get_float("Enter a real number: ");
    check(a);
    check(b);
    check(c);
    valid_triangle(a, b, c);
}

bool check(float x)
{
    if (x < 0)
    {
        return 0;
    }
    return 1;
}

bool valid_triangle(float a, float b, float c)
{
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        printf("Not a real triangle.\n");
        return 0;
    }
    printf("Congratulations, it's a triangle.\n");
    return 1;
}
