/*3���������ַ���������������Ҫ��strcat������*/

# include <stdio.h>
int main()
{
   char str1[80],str2[40];
   int i=0,j=0;
   printf("�����һ���ַ���:");
   gets(str1);
   printf("\n����ڶ����ַ���:");
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
  printf("\n�����ַ������ӣ�%s \n",str1);
} 
