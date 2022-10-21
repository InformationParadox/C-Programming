#include <stdio.h>
int main()
{
	int m,n,p,q,i,j,k;
	printf ("enter rows and coloumn of first matrix\n");
	scanf ("%d%d",&m,&n);
	printf ("enter rows and coloumn of second matrix\n");
	scanf ("%d%d",&p,&q);
	if (n!=p) 
	{
		printf ("matrix multiplication cannot be applied\n");
		return 1;
	}
	int a[m][n];
	int b[p][q];
	int c[10][10];
	printf("Enter the elements in the matrix A\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix a\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the elements in the matrix B\n");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nmatrix B\n");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//Matrix multiplication
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			int sum=0;
			for (k=0;k<p;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
	}
	printf ("resultant\n");
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{	
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	

      return 0;
}
