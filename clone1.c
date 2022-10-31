#include <stdio.h>
int bn_se(int n, int key, int arr[])
{

    int low = 0, high = n - 1, mid;
    while (low < -high)
    {
        mid = low + high / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        return -1;
    }


    int main()
    {

        int n;
        printf("enter the array:");
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            printf("arr[%d]=", i);
            scanf("%d", &arr[i]);
        }
        int key;
        printf("enter the key value:");
        scanf("%d", &key);
    }
    int temp;
    temp = bn_se(n, key, arr);

    if (temp == -1)
    {
        printf("key value not found\n");
    }
    else
    {
        printf("key value found at index=%d\n ", temp);
    }

    return 0;
}
