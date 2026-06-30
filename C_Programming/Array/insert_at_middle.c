#include <stdio.h>

int main()
{
    int arr[100];
    int n, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Right Shift
    for(int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert Value
    arr[pos] = value;

    n++;

    printf("\nArray after insertion:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}