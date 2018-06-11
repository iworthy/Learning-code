/*1!+2!+3!+...+10!*/
#include <stdio.h>
main()
{
	long term=i,sum=0;
	int i;
	for(i=2;i<=10;i++)
	{
		term = term*i;
		sun=sum+term;
	}
	printf("1!+2!+3!+...+10!=%d\n",sum);
	return 0;
}
