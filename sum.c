//Sum of n numbers using recursion
#include<stdio.h>
int sum(int n)
{
    if (n>0)
    {
        return n+sum(n-1);
    }
    else
    return n;

}
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    printf("sum is %d", sum(num));
    
    return 0;
}