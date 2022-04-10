#include<stdio.h>
int main()
{
	int a[40],n,i,big,small;
	int count=7;
	printf("enter the size of an array");
	count ++;
	scanf("%d",&n);
	count ++;
	printf("\nenter the elements in an array");
	count++;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count=count+1+(n+1)+n+n;
	small=a[0];
	count++;
	big=a[0];
	count++;
	for(i=1;i<n;i++)
	{
		if(a[i]<small)
		small=a[i];
	    if(a[i]>big)
	    big=a[i];
	}
	count=count+1+n+(n-1)+(n-1)+(n-1)+(n-1)+(n-1);
	 printf("smallest element =%d\n",small);
	 count++;
     printf("biggest element =%d\n",big);
     count++;
    printf("count=%d",++count);
}
