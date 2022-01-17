#include <stdio.h>
int printarray();
void bubblesort();
int main()
{
    int array[] = {7, 3, 1, 4, 2};
    int n = 5;
    bubblesort(array, n);
    printarray(array, n);
    return 0;
}

int printarray(int *A, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

void bubblesort(int *A, int N)
{
    int temp;
    for (int i = 0; i < N - 1; i++) //for pass|rounds
    {
        for (int j = 0; j < N - 1 - i; j++) //for compare
        {
            if (A[j] > A[j + 1]) //change > to < for descending order
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
