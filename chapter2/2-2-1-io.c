/*
 *  basic io function
 *  for input :1 a abc
 *  repected output is: a=1, c= , str=a
 *
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	char c, str[10];
	scanf("%d %c%s", &a, &c, str);
    // for this version, the space listing before a can be removed.
	//scanf("%d %c%s", &a, &c, str);
    
	printf("a=%d, c=%c, str=%s", a, c, str);

	return 0;
}

