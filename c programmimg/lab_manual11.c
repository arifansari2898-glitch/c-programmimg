#include <stdio.h>

int search(int a[], int n, int key)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int a[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = search(a, n, key);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);

    return 0;
}