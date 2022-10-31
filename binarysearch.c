#include <stdio.h>

int binarySearch(int array[], int key, int low, int high)
{
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == key)
            return mid;

        if (array[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main(void)
{
    int n;
    printf("enter the array:");
    scanf("%d", &n);
    int key;
    printf("enter the key value:");
    scanf("%d", &key);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }

    int result = binarySearch(arr, key, 0, n - 1);
    if (result == -1)
        printf("Not found\n");
    else
        printf("Element is found at index %d\n", result);
    return 0;
}
