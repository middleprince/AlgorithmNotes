/* 大整数的运算
*
*/

#include <cstdio>
#include <cstring>
#define MAX 1000

typedef struct BigNum bignum;
struct BigNum{
    int d[MAX];
    int len;
    BigNum(){
        memset(d, 0, sizeof(d));
        len = 0;
    }
}; 

int printBigNum(bignum );

bignum numToArray(char s[])
{  
   char c;
   bignum num;
   num.len = strlen(s);
   for(int i=0; i<num.len; i++){
       num.d[i] = s[num.len-i-1] - '0'; //注意string的存储顺序
    }
    return num;
}

bignum bigNumMinus(bignum a, bignum b)
{
    bignum c;
    
    for(int i=0; i<a.len || i<b.len; i++){
        if(a.d[i] < b.d[i]){
            a.d[i+1]--;
            a.d[i] += 10;
        }
        c.d[c.len++] = a.d[i] - b.d[i];
        while(c.len-1>=1 && c.d[c.len-1]==0)
           c.len--; 
    }
        return c;
}

int printBigNum(bignum k)
{
    for(int i=0; i<k.len; i++) 
        printf("%d", k.d[k.len-i-1]);
    return 0;
}

int main()
{
    bignum a, b;
    char sa[MAX], sb[MAX];

    while(scanf("%s %s", sa, sb) != EOF){
        a = numToArray(sa);
        b = numToArray(sb);
        int flag = 1;

        if(a.len > b.len) 
            flag = 1;
        else if(a.len == b.len){
            if(a.d[a.len-1] >  b.d[b.len-1])
                flag = 1;
            else
                flag = 0;
        }else
            flag = 0;
        
        if(flag)
            printBigNum(bigNumMinus(a, b));
        else
            printBigNum(bigNumMinus(b, a));
        printf("\n");
    }
    return 0;
}
