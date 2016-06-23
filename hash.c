  #include <stdio.h>
     
    int main(void) {
    	// your code goes here
    	int m,a[100],i,c[100]={0};
    	scanf("%d",&m);
    	for(i=0;i<m;i++)
    	{
    		scanf("%d",&a[i]);
    	}
     
    	for(i=0;i<m;i++)
    	{
    		c[a[i]]++;
    	}
    	for(i=0;i<m;i++)
    	{
    		if(c[i]>1)
    		{
    			printf("%d ",i);
    		}
    	}
    	return 0;
    }
     
