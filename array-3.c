#include<stdio.h>
main()
{
	int i,n;
	printf("enter size of array = ");
	scanf("%d",&n);
	int a[n],b[n],sum[n];
	printf("enter a array value =\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("enter b array value =\n");
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("sum of a & b array =");
	
	for(i=0;i<n;i++)
	{
		sum[i] = a[i] + b[i];
		printf("%d",sum[i]);
	}
}