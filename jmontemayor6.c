/* Jed Montemayor
 * CSC 251 - C Programming in UNIX
 * 10 February 2020
 * lab #6
 * */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (void)
{
	int x = 0, y = 0, z;
	int i;
	// printf("Enter a seed \n");
	// scanf("%d", &y);
	srand(time(NULL)); // time will find the random number
	x = rand()%10; // create a random function and store it to variable x, will have a size of 9	
	printf("z=%d y=%d x=%d \n", z,y,x);
	
	for(i = 0; i < 10; i++)
	{
		x = rand()%31+50;
		printf("x=%d \n", x);
	}
	
	return EXIT_SUCCESS;
}
