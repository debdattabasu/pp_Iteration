#include <stdio.h>
#include <conio.h>
int main()
{
	/* 
	
	How to use:
		1. Include loopstart.h
		2. define LOOP_END to be the number of required iterations
		3. define MACRO(x) to be the code fragment that is repeated. X is the loop counter.
		4. Include Loop.h
	*/

	#include "loopstart.h"
		#define LOOP_END 10
		#define MACRO(x) printf("%d\n", x);
	#include "loop.h"
	
	return 0;

}