#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Array Size = ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	int i,j;
	
	printf("Enter Array A = ");
	scanf("%d",&a);
	 
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<i ; j++)
		{
			scanf("%d",&a[i]);
		}
	}
	
	printf("Enter Array B = ");
	scanf("%d",&b);
	 
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<i ; j++)
		{
			scanf("%d",&b[i]);
		}
	}
}

