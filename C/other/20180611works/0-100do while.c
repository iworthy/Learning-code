/*0-100µÄdo-while*/ 
#include <stdio.h>
main()
{
	int i=1,sum=0;
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=100);
	printf("sum=%d\n",sum);
	return 0;
}
