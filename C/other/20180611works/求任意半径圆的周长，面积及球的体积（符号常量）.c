/*求任意半径圆的周长，面积及球的体积（符号常量）*/
#include <stdio.h>
#define PI 3.14
main()
{
	float C,S,V,R;
	printf("请输入半径R:\n");
	scanf("%f",&R);
	printf("C=%f\n",2*PI*R);
	printf("S=%f\n",PI*R*R);
	printf("v=%f\n",4/3*PI*R*R*R);
	return 0;
}
