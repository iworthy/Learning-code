#include <stdio.h>

/*https://blog.csdn.net/AA11224488/article/details/77315146*/
main()
{
	int c;
	c = getchar() != EOF;
	printf("%d\n",c);     //����ĳ��� printf(c); putchar(c); 
 } 
 
 
 /* 
    ��Vc++6.0�е��������ǣ� 
---------------------------- 
    �������ַ��� 
    nicosmos 
    1 
    Press any key to continue 
 
    �������ַ��� 
    1234567890 
    1 
    Press any key to continue 
 
    �������ַ���  //����������ǿո� 
 
    1 
    Press any key to continue 
 
    �������ַ���  //������������Ʊ�� 
 
    1 
    Press any key to continue 
 
 
    �������ַ���  //����������ǻ��з���ֱ�ӵ��Enter���� 
 
    1 
    Press any key to continue 
 
    �������ַ���  //��������ķ�ʽ�ǣ�ֱ�ӵ��Ctrl + Z 
    ^Z 
    0 
    Press any key to continue 
 
---------------------------- 
   �ܽ᣺1��������Ƕ��ַ����д���ġ� 
        2���ַ���������ĸ(0,1,a,B,..)���հ׷�(�ո��Ʊ�������з�)�������ַ�(%��&...) 
    3����Ctrl + Z���Ϊ0������ȫ����1,˵��EOF��Ctrl+Z��ʽ����ġ� 
*/  
