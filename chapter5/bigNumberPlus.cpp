/* 大整数的运算
*
*/

#include <cstdio>
#include <cstring>
#define MAX 100010

typedef struct BigNum bignum;
struct BigNum{
    int d[1000];
    int len;
    BigNum(){
        memset(d, 0, sizeof(d));
        len = 0;
    }

}; 

bignum numToArray(char s[])
{  
   char c;
   bignum num;
   num.len = strlen(s);
   for(int i=0; i<num.len; i++){
       num.d[i] = s[i] - '0'; //注意string的存储顺序
    }
    return num;
}

bignum bigNumPlus(bignum a, bignum b)
{
    int carry = 0, temp;
    bignum c;
    for(int i=0; i<a.len || i<b.len; i++){
        temp = a.d[i] + b.d[i] + carry;
        c.d[c.len++] = temp % 10;
        carry = temp / 10;
    }
    if(carry != 0){
        c.d[c.len++] += carry;
    }
    return c;
}

int printBigNum(bignum k)
{
    for(int i=0; i<k.len; i++) 
        printf("%d", k.d[i]);
    return 0;
}

int main()
{
    bignum a, b;
    char sa[MAX], sb[MAX];

    while(scanf("%s %s", sa, sb) != EOF){
        a = numToArray(sa);
        b = numToArray(sb);
        printf("the number: ");
        printBigNum(a);

        printf("\n");
        printBigNum( bigNumPlus(a, b));
        printf("\n");
    }
    return 0;
}
