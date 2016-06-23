#include <stdio.h>
#include<math.h>
int i;
int main(void) {
	int n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	dup(arr,n);
	// your code goes here
	return 0;
}
dup(int arr[],int n)
{
	int j=0,a[100];
	for(i=0;i<n;i++)
	{
		if(arr[abs(arr[i])]>=1)
		{
			arr[abs(arr[i])]-=arr[abs(arr[i])];
		}
		else
		{
		printf("%d",arr[i]);
		break;
		}
	}
//	printf("%d",a[0]);
}
