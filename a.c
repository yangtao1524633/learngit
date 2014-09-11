#include <stdio.h>
#include <malloc.h>
#include <mcheck.h>

main()
{
	mtrace();
	char *p;
	p=(char*)malloc(100);
	printf("hello,world/n");
	return 0;
}
