
#include<stdio.h>
//Rather than creating other matrix c, directly print the sum of two matrix in matrix form
int main()
{
   int a[100][100],b[100][100],i,j,m,n;
   printf("Enter the size of the matrix \n");
   scanf("%d%d", &m, &n);
   printf("Enter the First matrix\n");
   for(i=0;i<m;i++)
   {
	for(j=0;j<n;j++)
	{
	   scanf("%d",&a[i][j]);
	}
   }
   printf("\nEnter the Second matrix\n");
   for(i=0;i<m;i++)
   {
	for(j=0;j<n;j++)
	{
	   scanf("%d",&b[i][j]);
	}
   }

   printf("\nThe Addition of two matrix is\n");
   for(i=0;i<m;i++)
   {
	for(j=0;j<n;j++)
	{
	   printf("%d\t",a[i][j]+b[i][j]);
	}
   printf("\n");
   }
return 0;
}
