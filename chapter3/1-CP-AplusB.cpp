#include <cstdio>
#include <cstring>
#include <cmath>

int strToNumber(char str[])
{
    bool ne = false;
    int i = 0, result = 0, cnt = 0;
    int temp[16]={0};

    if(str[0] == '-'){
        i = 1;
        ne = true;
    }

    for( ; i<strlen(str); ++i){
        if(str[i] == ',') continue;

        temp[cnt++] = str[i] - '0';
        //putchar(str[i]);
        //puts("");
        //printf("%d\n", temp[cnt]);
    }

    for(int j=0; j<cnt; ++j){
        //printf("%d\n", temp[j]);
        result += temp[j] * pow(10, (cnt-j-1));
    }
    result = ne ? (-1 * result) : (result);
    return result;
}

int main()
{
    char stra[16], strb[16];

    int a, b;
    while(memset(stra, ' ', sizeof(stra)), memset(strb, ' ', sizeof(strb)), 
           scanf("%s %s", stra, strb) != EOF){
        a = strToNumber(stra); 
        b = strToNumber(strb);
        printf("%d\n", a+b);
        //for(int i=0; i<16; ++i)
        //    putchar(stra[i]);
    }  

    return 0;
}
