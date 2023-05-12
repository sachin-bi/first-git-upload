#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <process.h>

int playerscore = 0;
int computerscore = 0;
int rounds = 0;

int game(int n, int choice)
{
    if (n == choice)
    {
        system("color 0b");
        printf("GAME DRAW\n");
        rounds++;
    }

    else if (n == 1)
    {
        if (choice == 2)
        {
            system("color 0a");
            printf("YOU WIN\n");
            playerscore++;
            rounds++;
        }
        else
        {
            system("color 0c");
            printf("YOU LOSE\n");
            computerscore++;
            rounds++;
        }
    }

    else if (n == 2)
    {
        if (choice == 3)
        {
            system("color 0a");
            printf("YOU WIN\n");
            playerscore++;
            rounds++;
        }
        else
        {
            system("color 0c");
            printf("YOU LOSE\n");
            computerscore++;
            rounds++;
        }
    }

    else if (n == 3)
    {
        if (choice == 1)
        {
            system("color 0a");
            printf("YOU WIN\n");
            playerscore++;
            rounds++;
        }
        else
        {
            system("color 0c");
            printf("YOU LOSE\n");
            computerscore++;
            rounds++;
        }
    }
    else
    {
        printf("Wrong Choice\n");
    }
}

int main()
{
    int choice, n;
    char name[34];
    char res[34];

    printf("Welcome to Rock,Paper,Scissors GAME!!!\nWhat's your Name?\n");
    scanf("%s", &name);

    while (1)
    {
        int seed = 5;
        seed++;
        srand(time(NULL) * _getpid() * seed);
        n = rand() % 3 + 1;
        printf("Press 1 for Rock\nPress 2 for Paper\nPress 3 for Scissors\n0.Exit\n");
        scanf("%d", &choice);

        if (n == 1)
        {
            strcpy(res, "Rock");
        }
        else if (n == 2)
        {
            strcpy(res, "Paper");
        }
        else if (n == 3)
        {
            strcpy(res, "Scissors");
        }
        else
        {
            printf("Wrong Choice\n");
        }

        switch (choice)
        {

        case 0:
            system("cls");
            system("color 0f");
            printf("Thanks for playing %s\n", name);
            printf("You played %d rounds\n", rounds);
            printf("%s's Score:%d\n", name, playerscore);
            printf("Computer Score:%d\n", computerscore);
            exit(0);
        case 1:
            system("cls");
            printf("%s:Rock\n", name);
            printf("Computer:%s\n", res);
            game(n, choice);
            break;

        case 2:
            system("cls");
            printf("%s:Paper\n", name);
            printf("Computer:%s\n", res);
            game(n, choice);
            break;

        case 3:
            system("cls");
            printf("%s:Scissors\n", name);
            printf("Computer:%s\n", res);
            game(n, choice);
            break;

        default:
            system("cls");
            printf("Wrong Choice\n");
            break;
        }
    }

    return 0;
}