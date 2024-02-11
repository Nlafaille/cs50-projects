#include <cs50.h>
#include <stdio.h>

void print_row(int row, int height);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print row of bricks
        print_row(i+1,n);
    }
}

void print_row(int row, int height)
{
    int spaces = height - row;

    for(int i = 0; i < spaces; i++)  // Corrected syntax here
    {
        printf(" ");
    }

    // Print the left side of the pyramid
    for (int i = 0; i < row; i++)
    {
        printf("#");
    }

    // Print the 2-space gap
    printf("  ");

    // Print the right side of the pyramid
    for (int i = 0; i < row; i++)
    {
        printf("#");
    }

    printf("\n");
}
