#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>yw

int check_digit(string input);
string cipher(string message, int code);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string key = argv[1];
    check_digit(key);
    if (check_digit(key) == 1)
    {
        return 1;
    }
    int converted = atoi(key);
    string plaintext = get_string("plaintext: ");
    string encoded = cipher(plaintext, converted);
    printf("ciphertext: %s\n", encoded);
}

int check_digit(string input)
{
    for (int i = 0, max = strlen(input); i < max; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    return 0;
}

string cipher(string message, int code)
{
    string secret = malloc(strlen(message) + 1);
    for (int i = 0, max = strlen(message); i < max; i++)
    {
        if (isupper(message[i]))
        {
            secret[i] = ((message[i] - 'A' + code) % 26) + 'A';
        }
        else if (islower(message[i]))
        {
            secret[i] = ((message[i] - 'a' + code) % 26) + 'a';
        }
        else
        {
            secret[i] = message[i];
        }
    }
    return secret;
}
