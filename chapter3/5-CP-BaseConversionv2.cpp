#include<cstdio>
#include<cstring>


int main()
{
    char n[50], res[50];
    int a, b;
    
    while(scanf("%d %s %d", &a, n, &b) != EOF)
    {
        long long tmp_ten = 0;  
        int len = strlen(n), product = 1;
        for(int i=len-1; i>=0; --i)
        {
            if(n[i] >= 'a' && n[i] <= 'f')  
                tmp_ten += (n[i] - 'a' + 10) * product;
            else if(n[i] >= 'A' && n[i] <= 'F')  
                tmp_ten += (n[i] - 'A' + 10) * product;
            else
                tmp_ten += (n[i] - '0') * product;
            product *=  a;
        }
       
        int pos=0, tmp_b; 
        do
        {
            tmp_b = tmp_ten % b;
            res[pos++] = tmp_b < 10 ? (tmp_b + '0') : (tmp_b + 'A' -10);
            tmp_ten /= b;
        } while(tmp_ten != 0);
        
        //TO FIX
        
        for(int k=pos-1; k>=0; --k)
            printf("%c", res[k]);
        printf("\n");

    

    }
    return 0;
}
