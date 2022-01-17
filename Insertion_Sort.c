#include <stdio.h>
void insertion();
int printarray();
int main()
{
    int array[] = {66, 1, 8, 55, 4, 5, 2};
    int size = 7;
    printarray(array, size);
    return 0;
}

int printarray(int *arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void insertion(int *arr, int N)
{
    for (int  i = 0; i < count; i++)
    {
        /* code */
    }
    
}