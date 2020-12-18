#include <cstdio>
#include <cstring>

int main()
{
    char str[100];
	char str2[100];
	sprintf(str, "%s", "hello");
	sscanf(str2, "%s", str);
    printf("%s\n", str);
	return 0;
}
