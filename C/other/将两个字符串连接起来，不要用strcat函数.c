/*3、将两个字符串连接起来，不要用strcat函数。*/

# include <stdio.h>
int main()
{
   char str1[80],str2[40];
   int i=0,j=0;
   printf("输入第一个字符串:");
   gets(str1);
   printf("\n输入第二个字符串:");
   gets(str2);
   while(str1[i]!='\0')
      i++;
   while(str1[j]!='\0')
      {
         str1[i]=str2[j];
         i++;
         j++;
      }
  str1[i]='\0';
  printf("\n两个字符串连接：%s \n",str1);
} 
