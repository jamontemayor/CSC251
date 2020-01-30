#include<stdio.h>
#include<stdlibh>

int main( void )
{
	int x = 0, y = 0, z = 0;
	int count_a, count_b, count_c, total;
	char check;

	while(check != 'z')
	{
		printf("Enter a grade: ");
		scanf("%c", &check);

		/*if(check == 'a')
		{
			count_a++;
			total++;
			// count_a += 1;
			// count_a = count_a + 1;		
		}
		else if(check == 'b')
		{

		}
		else if 
		{

		}
		*/
		switch(check)
		{		
			case 'a':
				count_a++;
				break;
			case 'b':
				count_b++;
				break;
		}
	}
double average = (double)(4.0 * count_a + 3.0 * count_b...) / (double)total

}
