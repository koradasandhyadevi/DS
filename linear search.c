// linear search
#include<stdio.h>
int linear_search(int *a,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
        {
        	return i;
		}
	}
	return -1;
}
int main()
{
	int n,se;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	scanf("%d",&se);
	int y = linear_search(a,n,se);
	printf("%d",y);
}
