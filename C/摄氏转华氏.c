#include <stdio.h>

/*
�ο����ӣ�https://blog.csdn.net/WarnerWu/article/details/75152550
������ֵû�п���
��ʽ���벻�� ����ѧ���⣩
���������� ȱ��С���� 
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

