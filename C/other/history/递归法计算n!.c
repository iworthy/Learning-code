/*用递归法计算n！*/
#include <stdio.h>  
void main()  
{  
    float f(int);//函数原型  
    int n;  
    int sum;  
    printf("你想求谁（整数）的阶乘：");  
    scanf("%d",&n);  
    sum=f(n);  
    printf("%d!=%.2d\n",n,sum);  
}  
  
float f(int n)  
{  
    float sum;  
    if(n<0) printf("data error./n");  
    else if(n==0||n==1) sum=1;//加n==0是因为0也可以求阶乘，在调用函数时可以给实参n赋值为0  
    else sum=f(n-1)*n;  
    return sum;  
}  
