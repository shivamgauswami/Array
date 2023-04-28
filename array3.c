#include<stdio.h>

main()
{
	int a[100],n;
	
	printf("Enter your size of array =");
	scanf("%d",&n);
	
	int i;
	printf("Enter youe array =\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	
}
