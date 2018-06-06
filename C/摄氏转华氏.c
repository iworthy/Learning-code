#include <stdio.h>

/*
参考链接：https://blog.csdn.net/WarnerWu/article/details/75152550
变量赋值没有考虑
公式输入不对 （数学问题）
浮点型数据 缺少小数点 
*/
main()
{
	printf("F=C\n");
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -50;
	upper = 48;
	step = 10;
	
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%f,%f\n", celsius ,fahr);
		celsius = celsius + step;
	}
} 

