#include<stdio.h>
main()
{
	int n,a=0,z;
	
	printf("enter the value = ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		z = n%10;
		a = a *10+z;
		n/=10;
	}
	
	printf("a = %d",a);
}