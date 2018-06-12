/*************************************************************************
题目：写一个判素数的函数，在主函数输入一个函数，输出是否为素数的信息
https://zhidao.baidu.com/question/79959117.html
**************************************************************************/ 
#include <stdio.h> 
#include<math.h>
int is_prime_number(int num) 
{ 
int i; 
if(num<2) 
return 0; 
for(i=2;i<(int) sqrt(num)+1;i++) 
{ 
if(num%i==0) 
return 0;//不是素数 
} 
return 1; //是素数 
} 
int main() 
{ 
int n; 
printf("请输入一个整数:"); 
scanf("%d",&n); 
if(is_prime_number(n)) 
printf("%d是素数",n); 
else 
printf("%d不是素数",n); 
return 0; 
}
