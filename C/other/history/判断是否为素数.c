/*************************************************************************
��Ŀ��дһ���������ĺ�����������������һ������������Ƿ�Ϊ��������Ϣ
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
return 0;//�������� 
} 
return 1; //������ 
} 
int main() 
{ 
int n; 
printf("������һ������:"); 
scanf("%d",&n); 
if(is_prime_number(n)) 
printf("%d������",n); 
else 
printf("%d��������",n); 
return 0; 
}
