#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], mul[100][100], i, j,k,ps;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
    	mul[i][j]=0;
    	for (k = 0; k < r; k++)
    	{
    		mul[i][j]=	mul[i][j]+a[i][j]*b[i][j];	
		}
    
    }
  printf("\nproduct of two matrices: \n");
  for (i = 0; i < r; ++i)
  {
    for (j = 0; j < c; ++j) {
      printf("%d  ", mul[i][j]);
      }
      printf("\n");
    }
 ps=2*r*r+12*r*c+4*c+13*r+25;
 printf("Number of program steps =%d",ps);
  return 0;
}
