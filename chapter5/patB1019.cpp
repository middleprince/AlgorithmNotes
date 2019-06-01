#include <cstdio>
#include <algorithm>
#define KAPREKAR 6174
using namespace std;


void toArray(int num[], int k)
{
    for(int i=0; i<4; i++){
        num[i] = k % 10;
        k /= 10;
    }
}

int toNumber(int num[])
{
    int number = 0;
    for(int i=0; i<4; i++){
        number = num[i]  + number * 10;
    }
    return number;
}

bool cmp1(int a, int b)
{
    return a>b;
}


int main(void)
{
    int a, tmpHigh, tmpLow, tmp;


    while(scanf("%d", &a) != EOF){
        int num[5] = {0};
        if( a<1 || a>=10000)
            break;
        tmp = a;

        do{
            toArray(num, tmp);
            sort(num, num+4, cmp1);
            tmpHigh = toNumber(num);
            //printf("the high %d\n", tmpHigh);


            sort(num, num+4);
            tmpLow = toNumber(num);

            tmp = tmpHigh - tmpLow;
            printf("%04d - %04d=%04d\n", tmpHigh, tmpLow,tmp);

            //break;

            //if(tmp == KAPREKAR || tmp ==0 ) break;
        }while(tmp != KAPREKAR && tmp !=0 );

    }
    return 0;
}
