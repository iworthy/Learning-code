/*******************************
主次对角线之和 
*******************************/
#include <stdio.h>
main()
{
	static int a[][3]={9,7,5,3,1,2,4,6,8};
	int i,j,s1=0,s2=0;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(i==j)
		s1=s1+a[i][j]; 
		if(i+j==2)
		s2=s2+a[i][j];
	 } 
	 printf("%d , %d",s1,s2);
	 return 0;
 } 
