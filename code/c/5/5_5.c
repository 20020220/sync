#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float wallis_pi(int steps);
float leibniz_pi(int steps);
float euler_pi(int steps);

int iterations[] = {10, 100, 1000, 10000};
int count = sizeof(iterations) / sizeof(iterations[0]);

int main()
{
    for (int i = 0; i < count; i++)
    {
        int steps = iterations[i];
        printf("\nPi kiszámítása %i lépéssel.\n", steps);
        printf("\nWaillis: %f\n", wallis_pi(steps));
        printf("\nLeibniz: %f\n", leibniz_pi(steps));
        printf("\nEuler: %f\n", euler_pi(steps));
    }
    return 0;
}

float wallis_pi(int steps)
{
    float result = 1.0f;
    for (int i = 0; i < steps; ++i)
    {
        float a = floor(i / 2.0f) * 2.0f + 2.0f;
        float b = floor((i+1) / 2.0f) * 2.0f + 1.0f;
        result *= a / b;
    }
    return result*2.0f;
}

float leibniz_pi(int steps)
{
    float result = 0.0f;
    int multiplier;
    for (int i = 0; i < steps; i++)
    {
        multiplier = i % 2 == 0 ? 1.0f : -1.0f;
        result += multiplier / (2.0f * i + 1.0f);
    }
    return result*4.0f;
}

float euler_pi(int steps)
{
    float result = 0.0f;
    for (int i = 0; i < steps; i++)
    {
        result += 1.0f / pow(i+1, 2);
    }
    return sqrtf(result*6.0f);
}