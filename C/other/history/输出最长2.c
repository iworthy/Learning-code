#include<stdio.h>  
void input(char s[]){  
    int i=0;  
    for(int c;(c=getchar())!='\n';i++){  
        s[i]=c;  
    }  
    s[i]='\0';//��ȡ��ɣ��ǵö�����ַ�������  
}  
char* findmax(char s[]){  
    int max=0,word_length=0,p=0,i=0;//���p��������¼����ʵ�λ��  
    for(i=0;s[i]!='\0';i++){  
        if(s[i]==' '){//ɨ���ո�������Ƿ�Ϊ��ĵ���  
            if(max<word_length){  
                max=word_length;  
                p=i;  
            }  
            word_length=0;  
        }  
        else{//���iɨ���Ĳ��ǿո���ô��ʼ���㵥�ʵĳ���  
            word_length++;  
        }  
    }  
    if(max<word_length){//����������ĵ����ڽ�β�����  
        max=word_length;  
        p=i;  
    }  
    char longest_word[255];  
    for(p=p-max,i=0;max>0;max--,p++,i++){  
        longest_word[i]=s[p];  
    }  
    longest_word[i]='\0';  
    return longest_word;  
}  
void main(){  
    char s[255];  
    printf("Enter a String,please:\n");  
    input(s);     
    char* longest_word=findmax(s);  
    printf("The longest word is:%s",longest_word);  
}  
