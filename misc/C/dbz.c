/* Divide by zero */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int a = atoi(argv[1]); 
 	int b = atoi(argv[2]);

	int x = 3/(a-b);
		        return 0;
}
