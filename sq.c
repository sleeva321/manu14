#include <stdio.h>
 
int main(void) 
{
	int n,sum=0,sq,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sq=rem*rem;
		sum=sum+sq;
		n=n/10;
	}
	printf("\n%d",sum);
	return 0;
}
