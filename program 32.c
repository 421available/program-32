#include<stdio.h>
void main()
{
	int r,c,a[2][2],b[2][2],result[2][2],i,j;
	printf("Enter the number of rows(between 1and 100):");
	scanf("%d",&r);
		printf("Enter the number of columns(between 1and 100):");
	scanf("%d",&c);
	printf("Enter elements of 1st matrix \n:");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
	printf("Enter a %d%d:",i+1,j+1);
	scanf("%d",&a[i][j]);
}
printf("Enter elements of 2nd matrix \n:");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
	printf("Enter b %d%d:",i+1,j+1);
	scanf("%d",&b[i][j]);
}
	for( i=0;i<2;i++)
	for( j=0;j<2;j++)
{
	result[i][j]=a[i][j]+b[i][j];
}
printf("\n sum of matrix:");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("%d",result [i][j]);
		if(j== c-1)
		printf("\n\n");
	}
}
