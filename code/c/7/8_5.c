#include <stdio.h>
#include <stdlib.h>

int linear_search(int *list, int value, int length)
{
    for (int n = 0; n < length; n++)
        if (list[n] == value)
            return n;
    return -1;
}

int compare(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int binary_search(int *list, int value, int length)
{
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        int mid = list[left + (right - left) / 2];
        printf("%i", list[0]);
        if (mid == value)
            return mid;
        else if (mid < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int scores[] = {390, 366, 341, 276, 214, 148, 122, 73, 43, 43};
    int length = sizeof(scores) / sizeof(scores[0]);

    printf("\nAdd meg a pontszámot\n");
    int score;
    scanf("%i", &score);

    int *found_index = bsearch(&score, scores, length, sizeof (scores[0]), compare);

    if (found_index != NULL)
        printf("The index of %d in the sorted array is: %d\n", score, *found_index);
    else
        printf("%d not found in the sorted array.\n", score);

    int key = linear_search(scores, score, length);
    if (key == -1)
        printf("Nincs ilyen pontszám a listában.");
    else
        printf("\nA keresett pont a %i. helyezetthez tartozik.\n", key + 1);

    return 0;
}