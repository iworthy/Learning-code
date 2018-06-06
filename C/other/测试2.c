#include <stdio.h>
main() 
{
	int x=5,y=0;
	printf ("x=%5d y=%5d \n", x,y);
	func ();
	printf ("x=%5d y=%5d \n", x,y);
	func();
	
 } 
 func () 
{
 	static int x=4; int y=10;
 		x=x+2;
 		y=y+x;
 		printf("x0=%5d y0=%5d \n", x,y);
}
