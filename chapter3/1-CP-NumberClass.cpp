#include <cstdio>

// TODO: Wrong answer

int main()
{
    int N;
    scanf("%d", &N);
    
    int temp = 0;
    long a1=0, a2=0, a3=0, a5=0;
    int cnt_a1 = 0, cnt_a4 = 0, cnt_a2 = 0;
    int cnt_a5 = 0;
    double a4 = 0.0;

    while(N--){
        scanf("%d", &temp); 
        switch(temp%5){
            case 0:
               a1 += temp%2 == 0 ? temp : 0; 
               ++cnt_a1;
               break;
            case 1: 
               temp *= cnt_a2%2 == 0 ? 1 : -1;
               a2 += temp;
               ++cnt_a2;
               break;
            case 2:
               ++a3; 
               break;
            case 3:
               a4 += temp;
               ++cnt_a4;
               break;
            case 4:
               a5 = a5 > temp ? a5 : temp;
               ++cnt_a5;
               break;
        }
    }

    if(cnt_a1>0)
        printf("%ld ", a1);
    else
        printf("N ");
    
    if(cnt_a2>0)
        printf("%ld ", a2);
    else
        printf("N ");

    if(a3>0)
        printf("%ld ", a3);
    else
        printf("N ");

    if(cnt_a4>0)
        printf("%.1f ", a4/cnt_a4);
    else
        printf("N ");

    if(cnt_a5>0)
        printf("%ld", a5);
    else
        printf("N");
    

    return 0;
}
