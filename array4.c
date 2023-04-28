#include<stdio.h>

main()
{
	int a[100],n,i,sum=0,avg;
	
	printf("Enter your size of array =");
	scanf("%d",n);
	
	printf("Enter your array value =\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",a[i]);
	
	}
	sum=sum+a[i];
	printf("%d",sum);

	
}
