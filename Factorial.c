#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
int main()
{
    int num;
    while()
    while (1)
    {
        printf("-----------------------------\n");
        printf("Enter the number: ");
        scanf("%d", &num);
        printf("the factorial of %d is %d\n", num, fact(num));
      //  printf("---------------------\n");
    }
    return 0;
}
