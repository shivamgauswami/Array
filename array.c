#include<stdio.h>

main()
{
	int a[100],n,i;
	
	printf("Enter size of array =");
	scanf("%d",&n);
	
	
    for(i=0;i<n;i++)
    {
    	printf("Enter your array a[%d]=",i);
        scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
	}
	
}
