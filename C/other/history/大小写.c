#include <stdio.h>

int main(){
    char c;  //用户输入的字符 
    int small=0,  // 小写字母数目 
    	big=0,   // 大写字母数目 
        space=0,  // 空格数目 
        digit=0,  // 整数数目 
        others=0;  // 其他字符数目
    printf("输入一些字符：");
    while((c=getchar())!='\n'){  // 每次读取一个字符，回车时结束
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
    
    printf("\n统计结果:\n大写英文字母=%d\n小写英文字母=%d\n空格=%d\n整数=%d\n其他字符=%d\n\n", big, small, space, digit, others);
    return 0;
}
