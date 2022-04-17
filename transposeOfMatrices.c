#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], i, j,ps;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i=0; i<r; ++i)
    for (j=0; j<c; ++j) {
      scanf("%d", &a[i][j]);
    }
    
     printf("\nmatrices before transpose is : \n");
     for (i= 0; i<r; ++i)
      {
        for (j=0; j<c; ++j) {
        printf("%d  ",a[i][j]);
        }
       printf("\n");
      }
     //computing transpose
      for (i=0; i<r; ++i)
	  {
        for (j=0; j<c; ++j) {
           b[j][i]=a[i][j];
        }
      }
      printf("\nmatrices after transpose is : \n");
       for (i=0; i<c; ++i)
       {
         for (j=0; j<r; ++j) {
         printf("%d  ",b[i][j]);
         }
         printf("\n");
       }
       ps=9*r*c+3*c+10*r+18;
       printf("Number of program steps =%d",ps);
      return 0;
   }
