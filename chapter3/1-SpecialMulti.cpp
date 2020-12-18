#include <cstdio>
#include <cstring>

int main()
{
    char astr[16], bstr[16]; 
    while(memset(astr, ' ', sizeof(astr)), memset(bstr, ' ', sizeof(bstr)),
            scanf("%s %s", astr, bstr) != EOF){
        int res = 0;
        for(int i=0; i<strlen(astr); ++i)
            for(int j=0; j<strlen(bstr); ++j){
                res += (astr[i] - '0') * (bstr[j]-'0');     
            }
        printf("%d\n", res);
    }
    return 0;
}
