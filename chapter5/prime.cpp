#include <cstdio>
#define MAX 1000001 

int prim[MAX], num=0;
bool noPrime[MAX] = {false};
int hashTable[MAX];

int findPrime(int);
void printPrime(int);
int printArithProgPrime(int);

int main(void)
{  
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a >= b || b<2) 
            break;
        else if(a<2)
            a = 2;
        
        findPrime(b);
        int k = a;
        while(noPrime[k])
            k++;
        k = hashTable[k];
        //printf("the k is:%d\n", k);
        
        printf("the prims\n");
        printPrime(k);

        printArithProgPrime(k);
     
    }
    return 0; 
}

int findPrime(int b)
{
    //筛数法选取素数
    for(int i=2; i<=b; i++){
        if(noPrime[i]==false){
            prim[num++] = i; 
            hashTable[i] = num-1;
            if(num > b)
                return 0;
            for(int j=i+i; j<=b; j +=i)
                noPrime[j] = true;
        }  
    }
    return 0;
}
void printPrime(int k)  
{
    int n = 1;  
    for(int i = k; i<num; i++){
        printf("%d", prim[i]);
        if(n%10!=0 && i<num-1) 
            printf(" ");
        else
            printf("\n");
        n++;
            
    }
}

int printArithProgPrime(int begin)
{
    bool inPrim = false;
    int delta, prePrime;
    int i = begin;
    while(i < num){
        if(inPrim){
            if(delta == prim[i]-prePrime){
                printf(" %d",prim[i]);
            }else{
                printf("\n");
                inPrim = false; 
            } 
        }else if(i+2<num){
            delta = prim[i+1] - prim[i];
            if(delta == prim[i+2] - prim[i+1]){
                printf("%d %d %d", prim[i], prim[i+1], prim[i+2]);
                i += 2;
                inPrim = true;
            }
        }else
            break;
        
        prePrime = prim[i];
        ++i;
    } 
    return 0;
}
