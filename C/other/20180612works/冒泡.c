/*冒泡*/
/* 
用选择法对10个数进行排序 
*/  
#include<stdio.h>  
void main()  
{  
    int i,j,a[10];  
    for(i=0;i<10;i++)  
        scanf("%d",&a[i]);  
  
    for(i=0;i<9;i++)    
        {//n个数要进行n-1趟比较  
        for(j=0;j<=9-i;j++)          //每趟比较n-i次  
            if(a[j]>a[j+1])          //依次比较两个相邻的数，将小数放在前面，大数放在后面  
            {  
                int t=a[j];  
                a[j]=a[j+1];  
                a[j+1]=t;  
            }  
    }  
  
    for(i=0;i<10;++i)               //输出比较之后的数组  
        printf(" %d",a[i]);  
}  
