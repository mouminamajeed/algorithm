#include<stdio.h>
int main()
{
    int count=1;
    count++;
    int n;
    count++;
    int i;
    count++;
    int fact=1;
    printf("enter num ");
    count++;
    scanf("%d",&n);
    count++;
    printf("num of prog step before loop is %d\n",++count);
    for(i=1;i<=n;i++)
    {
        fact =fact*i;

    }
    count= count+1+n+1+n+n;
    printf("fact is %d \n",fact);
    count++;
    count++;
    printf("num of steps is %d \n",count);
}
