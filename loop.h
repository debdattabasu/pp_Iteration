#if(LOOP_END > LOOP_MAX) 
#error Loop Counter Too Big
#endif

MACRO(LOOP_START)

#if(LOOP_START == 0)
#undef LOOP_START
#define LOOP_START 1
#elif(LOOP_START == 1)
#undef LOOP_START 
#define LOOP_START 2
#elif(LOOP_START == 2)
#undef LOOP_START 
#define LOOP_START 3
#elif(LOOP_START == 3)
#undef LOOP_START 
#define LOOP_START 4
#elif(LOOP_START == 4)
#undef LOOP_START 
#define LOOP_START 5
#elif(LOOP_START == 5)
#undef LOOP_START 
#define LOOP_START 6
#elif(LOOP_START == 6)
#undef LOOP_START 
#define LOOP_START 7
#elif(LOOP_START == 7)
#undef LOOP_START 
#define LOOP_START 8
#elif(LOOP_START == 8)
#undef LOOP_START 
#define LOOP_START 9
#elif(LOOP_START == 9)
#undef LOOP_START 
#define LOOP_START 10
#endif

#if(LOOP_START < LOOP_END)
#include "loop.h"
#endif