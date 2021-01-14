#include<cstdio>
#include<cstring>
#include<algorithm>

int main()
{
    char data[220];
    while(gets(data))
    {
        int len = strlen(data); 
        std::sort(data, data+len); 
        printf("%s\n", data); 
    }
    return 0;
}

