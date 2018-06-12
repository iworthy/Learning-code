/*写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串。*/ 
#include <stdio.h>
#include <string.h>
#define N 100
void main()
{
      char *fanxu(char zifu[]);
      char a[N];
      char *d;
      printf("请输入一个字符串:\n");
      scanf("%s",a);
      d=fanxu(a);
      printf("反序%s:\n",d);
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
