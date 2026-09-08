#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); // Changes the randomly generated number each time someone runs the program.
    int n=rand()%100+1; // Generates a randomly generated number from 1-100.
    int guess,i=0; 
    char text[] = "Welcome to Guess the Number!";
    for (int j = 0; text[j] != '\0'; j++) //This particular loop is for adding gravity to the appearance of "Welcome" screen!
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
            scanf("%d", &guess);
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
                continue;
            }
        }
        return 0;
    }
