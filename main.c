#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number, perfectNumber;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number < 0){
        printf("Please enter a positive number .. ");
        return 0;
    }
    for(int i = 1; i<=number/2; i++)
    {
        if(number % i == 0)
        {
            perfectNumber += i;
        }
    }
    if(perfectNumber == number)
    {
        printf("Your number is perfect number...");
    }
    else
    {
        printf("No it's not...");
    }
    return 0;
}
