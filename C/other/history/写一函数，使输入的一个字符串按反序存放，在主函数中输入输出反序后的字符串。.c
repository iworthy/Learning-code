/*дһ������ʹ�����һ���ַ����������ţ�������������������������ַ�����*/ 
#include <stdio.h>
#include <string.h>
#define N 100
void main()
{
      char *fanxu(char zifu[]);
      char a[N];
      char *d;
      printf("������һ���ַ���:\n");
      scanf("%s",a);
      d=fanxu(a);
      printf("����%s:\n",d);
      getchar();
}


      char *fanxu(char zifu[])
{
      char t;
      int i;
      for (i=0;i <strlen(zifu)/2;i++)
  {
      t=zifu[i];
      zifu[i]=zifu[strlen(zifu)-i-1];
      zifu[strlen(zifu)-i-1]=t;
  }
      return(zifu);
} 
