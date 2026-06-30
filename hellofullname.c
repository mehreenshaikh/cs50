#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your first name? ");
    string answertwo = get_string("What's your last name? ");
    printf("hello, %s %s\n", answer, answertwo);
}
