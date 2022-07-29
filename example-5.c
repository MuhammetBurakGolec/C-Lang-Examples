#include <stdio.h>
#include <stdbool.h>

// Prime number check
bool isPrime(int given_n)
{
    // We define the Variables that we will use in the isPrime bool and that we were not import.
    int i;
    // Our loop determines whether the number is prime or not.
    for(i = 2 ; i <= given_n / 2 ; i++) //
    {
        // We test the divisibility of the number.
        if(given_n % i == 0)
        {
            // if the any full number divide fully numbers which given by loop thats mean the given number is not prime.
            return false;
        }
    }
    // We specify that a number is a prime number when it has no divisibility except for 1 and itself.
    return true;
}

// It sends the numbers, including the value up to the value we give, to isPrime and checks whether they are prime and prints them if they are prime.
void list(int range_n)
{
    // We define the variables that we use in the list function and that we were not import
    int x;
    printf("Range of The Prime Numbers :");
    // Loop that starts from 2 and increments one up to the given number range_n
    for(x = 2 ; x<= range_n ; x++)
    {
        //  We control the number is prime or not
        if(isPrime(x) == true) // isPrime's response is bool so it can only be true or false
        {
            // We check if the number in the loop is prime.
            printf(" [ %d ],",x);
        }
    }
}

// Our main code block | When the code runs, the first block to run is main
int main()
{
    // We define the Variables
    int number;
    // We request data from user | We assign the entered value to the variable number
    printf("\nEnter a number which you want to control of being prime: ");
    scanf("%d",&number);
    // We call the list function with the number value
    list(number);
}
