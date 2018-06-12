#include <stdio.h>

/*https://blog.csdn.net/AA11224488/article/details/77315146*/
main()
{
	int c;
	c = getchar() != EOF;
	printf("%d\n",c);     //错误的尝试 printf(c); putchar(c); 
 } 
 
 
 /* 
    在Vc++6.0中的输出结果是： 
---------------------------- 
    请输入字符： 
    nicosmos 
    1 
    Press any key to continue 
 
    请输入字符： 
    1234567890 
    1 
    Press any key to continue 
 
    请输入字符：  //这里输入的是空格 
 
    1 
    Press any key to continue 
 
    请输入字符：  //这里输入的是制表符 
 
    1 
    Press any key to continue 
 
 
    请输入字符：  //这里输入的是换行符，直接点击Enter即可 
 
    1 
    Press any key to continue 
 
    请输入字符：  //这里输入的方式是：直接点击Ctrl + Z 
    ^Z 
    0 
    Press any key to continue 
 
---------------------------- 
   总结：1、计算机是对字符进行处理的。 
        2、字符：数字字母(0,1,a,B,..)、空白符(空格，制表符，换行符)、特殊字符(%，&...) 
    3、除Ctrl + Z结果为0，其余全部是1,说明EOF是Ctrl+Z方式输入的。 
*/  
