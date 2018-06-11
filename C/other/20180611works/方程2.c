#include <stdio.h>
main()
{
	int x;
	scanf("%d",&x);
	if(x<2)
	{
		printf("y=1");
	}
	else if(x>=2&&x<7)
	{
		printf("y=0");
	}
	if (x>=7)
	{
		printf("y=-1");
	}
	return 0; 
}
