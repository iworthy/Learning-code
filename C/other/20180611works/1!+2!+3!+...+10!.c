/*1!+2!+3!+...+10!*/
#include <stdio.h>
main()
{
	long term=1,sum=0;
	int i;
	for(i=1;i<=10;i++)
	{
		term = term*i;
		sum=sum+term;
	}
	printf("1!+2!+3!+...+10!=%d\n",sum);
	return 0;
}
