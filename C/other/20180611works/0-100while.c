/*0-100��while*/ 
#include <stdio.h>
main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
