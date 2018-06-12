#include <stdio.h>

int main()
{
	void f (float,float);
	float x,y;
	scanf("%f,%f",&x,&y);
	f (x,y);
	return 0;
}
void f (float  a,float b)
{
	float c;
	if(a>b)
		c=a+b;
	else c=a-b;
	printf("%f", c);
}
