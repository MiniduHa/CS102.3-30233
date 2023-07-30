#include <stdio.h>
int main()
{
    int arr[10];
    int i, sum = 0;
    printf("Enter 10 integer values: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    double average = (double)sum / 10;
    printf("\nAverage value: %.2f\n", average);

    return 0;
}

