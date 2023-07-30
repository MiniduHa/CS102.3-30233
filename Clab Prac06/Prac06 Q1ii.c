#include <stdio.h>
int main()
 {
    int arr[10];
    int i, max;
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            max = arr[i];
        }
    else
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }
    printf("\nMaximum value: %d\n", max);

    return 0;
}

