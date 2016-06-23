 #include <stdio.h>
     #include<math.h>
     
    int main(void) {
    	// your code goes here
    	int m,a[100],i,sum=0;
    	scanf("%d",&m);
    	for(i=0;i<m;i++)
    	{
    		scanf("%d",&a[i]);
    	}
     
    	for(i=0;i<m;i++)
    	{
    		sum=abs(sum-a[i]);
    	}
    	printf("%d",sum);
    	return 0;
    }
     
