#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string uppercase(string phrase);
int compute(string word);

int main(void)
{
    string input = get_string("Player 1: ");
    string inputwo = get_string("Player 2: ");
    uppercase(input);
    uppercase(inputwo);
    int score1 = compute(input);
    int score2 = compute(inputwo);
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }
}

string uppercase(string phrase)
{
    for (int i = 0, n = strlen(phrase); i < n; i++)
    {
        phrase[i] = toupper(phrase[i]);
    }
    return phrase;
}

int compute(string word)
{
    int sum = 0;
    for (int i = 0, max = strlen(word); i < max; i++)
    {
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'L' || word[i] == 'N' || word[i] == 'O' || word[i] == 'R' || word[i] == 'S' || word[i] == 'T' || word[i] == 'U')
        {
            sum = sum + 1;
        }
        else if (word[i] == 'D' || word[i] == 'G')
        {
            sum = sum + 2;
        }
        else if (word[i] == 'B' || word[i] == 'C' || word[i] == 'M' || word[i] == 'P')
        {
            sum = sum + 3;
        }
        else if (word[i] == 'F' || word[i] == 'H' || word[i] == 'V' || word[i] == 'W' || word[i] == 'Y')
        {
            sum = sum + 4;
        }
        else if (word[i] == 'K')
        {
            sum = sum + 5;
        }
        else if (word[i] == 'J' || word[i] == 'X')
        {
            sum = sum + 8;
        }
        else if (word[i] == 'Q' || word[i] == 'Z')
        {
            sum = sum + 10;
        }
    }
    return sum;
}
