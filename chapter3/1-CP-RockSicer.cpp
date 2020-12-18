#include <cstdio>

// TODO: this version to redandunt cant not ac
int main()
{
    char a, b;
    int N, win=0, lose=0, draw=0;
    int a_j=0, a_c=0, a_b=0;
    int b_j=0, b_c=0, b_b=0;
    
    scanf("%d", &N);
    while(N--){
        scanf(" %c %c", &a, &b); 
        if(a == 'C' && b == 'J'){
            ++win; 
            ++a_c; 
            continue;
        }
        if(a == 'J' && b=='B'){
            ++win; 
            ++a_j; 
            continue;
        }
        if(a == 'B' && b=='C'){
            ++win; 
            ++a_b; 
            continue;
        }

        if(b == 'C' && a == 'J'){
            ++lose; 
            ++b_c; 
            continue;
        }
        if(b == 'J' && a=='B'){
            ++lose; 
            ++b_j; 
            continue;
        }
        if(b == 'B' && a=='C'){
            ++lose; 
            ++b_b; 
            continue;
        }
        if(a==b)
            ++draw;
    }

    
    printf("%d %d %d\n", win, draw, lose);
    printf("%d %d %d\n", lose, draw, win);

    if(a_c > a_j && a_c > a_b){
        printf("C "); 
        goto out1;
    }
    if(a_b > a_c && a_b > a_j){
        printf("B "); 
        goto out1;
    }
    if(a_j > a_c && a_j > a_b){
        printf("J "); 
        goto out1;
    }
    if(a_j == a_c && a_j > a_b){
        printf("C ");
        goto out1;
    }
    if((a_j == a_b && a_j > a_c) || (a_b == a_c && a_c > a_j)
            || (a_j == a_b == a_c)){
        printf("B ");
        goto out1;
    }
   
    out1: ; 

    if(b_c > b_j && b_c > b_b){
        printf("C "); 
        goto out2;
    }
    if(b_b > b_c && b_b > b_j){
        printf("B"); 
        goto out2;
    }
    if(b_j > b_c && b_j > b_b){
        printf("J"); 
        goto out2;
    }
    if(b_j == b_c && b_j > b_b){
        printf("C");
        goto out2;
    }
    if((b_j == b_b && b_j > b_c) || (b_b == b_c && b_c > b_j)
            || (b_j == b_b == b_c)){
        printf("B");
        goto out2;
    }
    
    out2: 
        return 0;    
}
