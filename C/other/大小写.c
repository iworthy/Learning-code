#include <stdio.h>

int main(){
    char c;  //�û�������ַ� 
    int small=0,  // Сд��ĸ��Ŀ 
    	big=0,   // ��д��ĸ��Ŀ 
        space=0,  // �ո���Ŀ 
        digit=0,  // ������Ŀ 
        others=0;  // �����ַ���Ŀ
    printf("����һЩ�ַ���");
    while((c=getchar())!='\n'){  // ÿ�ζ�ȡһ���ַ����س�ʱ����
        if(c>='a'&&c<='z')
            small++;
        else if(c>='A'&&c<='Z') 
        	big++;
        else if(c==' ')
            space++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            others++;
    }
    
    printf("\nͳ�ƽ��:\n��дӢ����ĸ=%d\nСдӢ����ĸ=%d\n�ո�=%d\n����=%d\n�����ַ�=%d\n\n", big, small, space, digit, others);
    return 0;
}
