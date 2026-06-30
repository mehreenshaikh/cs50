#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// takes command line argument for height

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./mario number\n");
        return 1;
    }
    int height = atoi(argv[1]);
    // atoi() converts string to integer
}
