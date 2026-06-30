#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
void get_grade(int num);

int main(void)
{
    string input = get_string("Text: ");
    int n = count_letters(input);
    int m = count_words(input);
    int p = count_sentences(input);
    printf("%i, %i, %i\n", n, m, p);
    float L = (float) n / m * 100;
    L = round(L);
    float S = (float) p / m * 100;
    S = round(S);
    float clindex = 0.0588 * L - 0.296 * S - 15.8;
    clindex = round(clindex);
    get_grade(clindex);
}

int count_letters(string text)
{
    int l = 0;
    for (int i = 0, max = strlen(text); i < max; i++)
    {
        if (isalpha(text[i]))
        {
            l++;
        }
    }
    return l;
}

int count_words(string text)
{
    int w = 1;
    for (int i = 0, max = strlen(text); i < max; i++)
    {
        if (text[i] == ' ')
        {
            w = w + 1;
        }
    }
    return w;
}

int count_sentences(string text)
{
    int s = 0;
    for (int i = 0, max = strlen(text); i < max; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            s = s + 1;
        }
    }
    return s;
}

void get_grade(int num)
{
    if (num >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (num < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (num == 2)
    {
        printf("Grade 2\n");
    }
    else if (num == 3)
    {
        printf("Grade 3\n");
    }
    else if (num == 4)
    {
        printf("Grade 4\n");
    }
    else if (num == 5)
    {
        printf("Grade 5\n");
    }
    else if (num == 6)
    {
        printf("Grade 6\n");
    }
    else if (num == 7)
    {
        printf("Grade 7\n");
    }
    else if (num == 8)
    {
        printf("Grade 8\n");
    }
    else if (num == 9)
    {
        printf("Grade 9\n");
    }
    else if (num == 10)
    {
        printf("Grade 10\n");
    }
    else if (num == 11)
    {
        printf("Grade 11\n");
    }
    else if (num == 12)
    {
        printf("Grade 12\n");
    }
    else if (num == 13)
    {
        printf("Grade 13\n");
    }
    else if (num == 14)
    {
        printf("Grade 14\n");
    }
    else if (num == 15)
    {
        printf("Grade 15\n");
    }
}
