#include <cstdio>
#include <math.h>
#include <cstring>
#define MAX 100010

struct fraction{
    int prime;
    int exp;
}fra[10];

int primeList[MAX];
int num = 0;
bool isPrime(int k)
{
    if(k == 2)  return true;
    for(int i=2; i<sqrt(k); i++)
        if(k%i == 0)    return false;
    return true;
}

int findPrimeList(void)
{
    for(int i=2; i<=MAX; i++)
        if(isPrime(i)) primeList[num++] = i;
    return 0;
}

int printByExp(int n, int num)
{       //printf("the num %d\n", num);
        printf("%d=", n);
    for(int i=0; i<num; i++){
        if(i > 0) printf("*"); 
        printf("%d", fra[i].prime);
        if(fra[i].exp > 1)
            printf("^%d", fra[i].exp);
    }
    printf("\n");

//        while(i<num){
//            if(fra[i].exp>1) printf("%d^%d*",fra[i].prime, fra[i].exp);
//            else if(fra[i].exp == 1) printf("%d*", fra[i].prime);
//            ++i;
//        }
//        if(fra[i].exp>1) printf("%d^%d\n",fra[i].prime, fra[i].exp);
//        else if(fra[i].exp == 1) printf("%d\n", fra[i].prime);

        return 0;
}


int main(void)
{
    int n, nCopy;
    while(scanf("%d", &n)!=EOF && n>0){
        memset(fra,0, sizeof(fra));
        nCopy = n;
        int num = 0;
        findPrimeList();

        int halfWay = (int)sqrt(n*1.0);
        if(n == 1){
            printf("1=1\n");
            continue;
        }

        for(int i=0; i<halfWay; i++){
            if(n%primeList[i] == 0){
                fra[num].prime = primeList[i];
                fra[num].exp = 1;
                n /= primeList[i];
                while(n%primeList[i] == 0){
                    n /= primeList[i];
                    fra[num].exp += 1;
                }
               // printf("in prime and n is: %d\n", n);
                ++num;
                if(n==1) break;
            }
        }
        if(n > 1){
            fra[num].prime = n;
            fra[num].exp = 1;
            ++num;
            //printf("great than half, n is %d num is%d\n", n, num);
        }

        printByExp(nCopy, num);

    }
}
