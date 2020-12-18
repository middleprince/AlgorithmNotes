#include <cstdio>

int symbolsToIndex(char c)
{
    if(c == 'B') return 0;    
    if(c == 'C') return 1;    
    if(c == 'J') return 2;    
    return -1;
}

int main()
{
    char symbols[3] = {'B', 'C', 'J'};
    int N;
    int wins_a[3] = {0}, wins_b[3] = {0};
    int symbols_a[3] = {0}, symbols_b[3]={0};  // storing pattern which wins the game

    char a, b;
    int temp_a, temp_b;
    
    scanf("%d", &N);
    while(N--){
        getchar(); // remvoe '\n' in input stream
        scanf("%c %c", &a, &b); 
        temp_a = symbolsToIndex(a);
        temp_b = symbolsToIndex(b);
        if((temp_a+1) % 3 == temp_b){   // a wins and b loses;
            wins_a[0]++; 
            wins_b[2]++; 
            symbols_a[temp_a]++;
        }else if(temp_a == temp_b){     // a draw situation
            wins_a[1]++; 
            wins_b[1]++; 
        }else{                          // a loses and b wins
            wins_a[2]++;
            wins_b[0]++;
            symbols_b[temp_b]++;
        }
    }

    printf("%d %d %d\n", wins_a[0], wins_a[1], wins_a[2]);
    printf("%d %d %d\n", wins_b[0], wins_b[1], wins_b[2]);
    
    int idx1 = 0, idx2 = 0;
    for(int i=0; i<3; ++i){
        if(symbols_a[i] > symbols_a[idx1]) idx1 = i; 
        if(symbols_b[i] > symbols_b[idx2]) idx2 = i; 
    }
    printf("%c %c", symbols[idx1], symbols[idx2]);
    return 0;
    
}
