#include <stdio.h>
int main(){
    char c;  //�û�������ַ� 
    int letters=0,  // ��ĸ��Ŀ 
        space=0,  // �ո���Ŀ 
        digit=0,  // ������Ŀ 
        others=0;  // �����ַ���Ŀ
    printf("����һЩ�ַ���");
    while((c=getchar())!='\n'){  // ÿ�ζ�ȡһ���ַ����س�ʱ����
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            letters++;
        else if(c==' ')
            space++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            others++;
    }
    
    printf("\nͳ�ƽ��:\nӢ����ĸ=%d\n�ո�=%d\n����=%d\n�����ַ�=%d\n\n", letters, space, digit, others);
    return 0;
}
