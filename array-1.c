#include<stdio.h>
main()
{
	int a[] = {1,3,2,4,5};
	int i,length;
	length = sizeof(a)/sizeof(0);
	printf("size of array =  %d\n",length);
	
	for(i=0;i<length;i++){
		printf("a=%d\n",a[i]);
		}
}