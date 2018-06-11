/*n!*/
#include <stdio.h>
long fact(long n);
main()
{
	int n;
	long result;
	printf("input n:");
	scanf("%d",&n);
	result=fact(n);
	if(result != 0)
	{
		printf("%d!=%1d\n",n,result);
	}
}
