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
	if(result != -1)
	printf("%d!=%1d\n",n,result);
}
long fact(long n)
{
	if(n<0)
	return -1;
	else if (n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}
