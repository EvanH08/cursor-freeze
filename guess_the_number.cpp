#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <Windows.h>
#include <unistd.h>

int main()
{
    srand ( time(NULL) );
    int guess;
    int number = rand() % 100 + 1;
    bool completed = false;
    while(completed == false)
    {
        printf("Guess a number between 1 and 100: ");
        std::cin >> guess;
        if(guess == number) {
            printf("That is the correct number! \n");
            completed = true;
            Sleep(3000);
            exit(0);
        } else if(guess < 1) {
            printf("That is not a valid number! \n");
        } else if(guess > 100) {
            printf("That is not a valid number! \n");
        } else if(guess > number) {
            printf("Lower! \n");
        } else if (guess < number) {
            printf("Higher! \n");
        }
    }
}