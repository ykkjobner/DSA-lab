#include<stdio.h>
void toh(int n, char source, char destination, char spare)
{
	if(n==1)
	{
		printf("Move disk 1 from rod %c to rod %c\n",source,destination);
		return ;
	}
	toh(n-1,source,spare,destination);
    printf("Move disk %d from rod %c to rod %c\n", n,source,destination);
	toh(n-1,spare,destination,source);
	
}
int main()
{
	int n;
	while(1)
	{
			printf("Enter the no. of Disks: ");
	        scanf("%d",&n);
	        toh(n,'A','C','B');
}
    return 0;
}
