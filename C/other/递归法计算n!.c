/*�õݹ鷨����n��*/
#include <stdio.h>  
void main()  
{  
    float f(int);//����ԭ��  
    int n;  
    int sum;  
    printf("������˭���������Ľ׳ˣ�");  
    scanf("%d",&n);  
    sum=f(n);  
    printf("%d!=%.2d\n",n,sum);  
}  
  
float f(int n)  
{  
    float sum;  
    if(n<0) printf("data error./n");  
    else if(n==0||n==1) sum=1;//��n==0����Ϊ0Ҳ������׳ˣ��ڵ��ú���ʱ���Ը�ʵ��n��ֵΪ0  
    else sum=f(n-1)*n;  
    return sum;  
}  
