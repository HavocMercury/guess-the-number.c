#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    srand(time(NULL));        // Changes the randomly generated number each time someone runs the program.
    int n = rand() % 100 + 1; // Generates a randomly generated number from 1-100.
    int guess, i = 0;
    int check = 0, lengthchecker = 0;
    char input[100];
    int valid = 1;

    char text[] = "Welcome to Guess the Number!";
    for (int j = 0; text[j] != '\0'; j++) // This particular loop is for adding gravity to the appearance of "Welcome" screen!
    {
        printf("%c", text[j]);
        fflush(stdout);
        Sleep(30);
    }
    printf("\n");
    Sleep(1000); // Further gravity before user starts guessing the number

    while (1)
    {
        printf("Guess The Number : ");
        scanf("%99s", input);
        valid=1; 
        // Check every character
        for (int i = 0; input[i] != '\0'; i++)
        {
            if (!isdigit((unsigned char)input[i]))
            {
                valid=0;
                break;
            }
        }

        if (!valid)
        {
            printf("Invalid input, you have to choose a number! \n");
            continue;
        }
        guess = atoi(input); // Converts the array to integer for further checking whether its in range or not, and if its the guess
        if (guess >= 1 && guess <= 100) // Checks whether or not, number entered by user is in the valid range
        {
            if (guess == n)
            {
                i++;
                printf("You have guessed the number! It took you a total of %d try(s)!\n", i);
                break;
            }
            else
            {
                i++;
                printf("%d was not the number! Trial number : %d!\n", guess, i);
                if (guess > n) // this portion is so help the user to some extent when it comes to guessing the number
                { 
                    printf("Go lower!\n");
                }
                else if (guess < n)
                {
                    printf("Go higher!\n");
                }
                continue;
            }
        }
        else
        {
                printf("%d is not in the given range (1-100)!\n", guess);
                continue;
        }
    }
     return 0;
}

