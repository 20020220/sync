#include <stdio.h>
#include <stdbool.h>

bool isPrime(int value);
bool readTarget(int *target);
void clearStdin();

int main()
{
    while (true)
    {
        // Read the input
        int input;
        while (!readTarget(&input)){}
           // clearStdin();
        // Check if prime
        printf(isPrime(input) ? "Prím" : "Nem prím");
    }
    return 0;
}

/** Read and validate the target value.
 * @param target Pointer to the read target.
 * @returns True if valid.
 */
bool readTarget(int *target)
{
    printf("\nAdj meg egy számot\n");
    if (scanf("%i", target) != 1)
    {
        printf("\nHibás szám\n");
        return false;
    }
    if (*target < 0)
    {
        printf("\nNem pozitív\n");
        return false;
    }
    return true;
}

/** Check if the provided number is prime.
 * @param value The number to check.
 * @returns True if prime.
 */
bool isPrime(int value)
{
    for (int i = 2; i < value; i++)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

/** Clear the input memory. */
void clearStdin()
{
    while (true)
    {
        int c = getchar();
        if (c == EOF || c == '\n')
        {
            break;
        }
    }
}