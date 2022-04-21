#include<stdio.h>
void quicksort (int a[40],int first, int last)
{
int i, j, pivot, temp;//pivot fr sorting

if (first<last)
{

pivot=first;//0th elemnt
i=first;
j=last;
while (i<j)
{
while (a [i]<=a [pivot] &&i<last)
i++;
while (a[j]>a[pivot])
j--;
 //at prtculr point it wll nt decrse as i inc and j dec
if (i<j)
{
temp =a [i];
a [i]=a [j];
a[j]=temp;
}
}
 //when i crosses j i.e i>j cond bcm false ,elmnt in pvt swapd with indx el j
temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
quicksort(a,0,j-1);//call fr lft elmnts,in lft indx strt with0 to pvt index-1
quicksort(a,j+1,last);//fr rght el, call recursvl yuntil crct pos of indx
}
}
int main ()
{

int a[40],n,i;
printf("enter sizeof array:-");
scanf(" %d", &n);
printf ("enter elements: ");
for (i=0; i<n; i++)
scanf ("%d", &a[i]);
quicksort (a, 0, n-1) ;
printf ("sorted elements are: ") ;
for (i=0; i<n; i++)
printf (" %d", a [i]);
return 0;
}
