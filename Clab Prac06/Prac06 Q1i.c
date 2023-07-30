#include <stdio.h>

int main()
 {
    int arr[10];
    int i, min;
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            min = arr[i];
        }
        else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    printf("\nMinimum value: %d\n", min);

    return 0;
}

