/*2����һ��������ʵ�ֽ�һ���ַ�������ĵ�������������ַ��������������ݸ��ú�����*/

#include <stdio.h>
#include <string.h>
int main()
{
    int judge(char);
    int longest(char[]);
    int i;
    char str[100];
    printf("please input one line:\n");
    gets(str);
    printf("the longest word is:");
    for(i=longest(str);judge(str[i]);i++)
        printf("%c",str[i]);
    return 0; 
}
int judge(char c){
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
        return(1);
    else
        return(0);  
}
int longest(char string[]){
        int len=0,i,length=0;
        int flag=0,place=0,point;
        for(i=0;i<=strlen(string);i++){
        if((judge)(string[i])){ 
            if(flag){
                point=i;
                flag=0;
            }
            else len++;
            } 
        else{
            flag=1;
            if(len>=length){
                length=len;
                place=point;
                len=0;
                }
            }
        }   
    return(place);
}
