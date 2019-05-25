#include<stdio.h>
int inputarray();
int sumarray(int a[],int n);
int outputarray();
int main()
{
int a[100],sum,n;
printf("enter the value of n\n");
scanf("%d",&n);
inputarray(a,n);
sum=sumarray(a,n);
outputarray(sum);
}
int inputarray(int a[],int n)
{
	int i;
printf("enter the array elements\n");
for(i=0;i<n;i++)
 {

 scanf("%d",&a[i]);
 }
}
int sumarray(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
  	sum=sum+a[i];

return sum;
}
int outputarray(int sum)
{
printf("sum = %d",sum);
}

