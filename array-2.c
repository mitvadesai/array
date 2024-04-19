#include<stdio.h>
main()
{
	int n,i,sum=0,ave;
	printf("how many elements enter in array = ");
	scanf("%d",&n);
	int a[n];
	printf("enter array element = \n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	printf("sum of all array element =%d\n",sum);
	ave = sum/n;
	printf("average of all array elements =%d\n",ave);
}