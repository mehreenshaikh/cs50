#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);

    char *s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    // ^ first character's location
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}
