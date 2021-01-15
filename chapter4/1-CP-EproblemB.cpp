#include<cstdio>
#include<algorithm>

const int maxn = 10;
// FIXED: erro50
int main()
{
    int  data[maxn][maxn], sums[25];
    
    int m;
    //fix the bugs, which multple inputs
    while(scanf("%d", &m) != EOF)
    {
        int k = 0;
        for(int i=0; i<m; ++i)
        {
            int row_sum = 0;
            for(int j=0; j<m; ++j)
            {
                scanf("%d", &data[i][j]); 
                row_sum += data[i][j];
            }
            sums[k++] = row_sum;
        }

        for(int i=0; i<m; ++i)
        {
            int col_sum = 0;
            for(int j=0; j<m ; ++j) 
                col_sum += data[j][i];
            sums[k++] = col_sum;
        }

        int diagnol_sum = 0; 
        for(int i=0; i<m; ++i)
            diagnol_sum += data[i][i]; 
        sums[k++] = diagnol_sum;
        
        diagnol_sum = 0; 
        for(int i=0; i<m; ++i)
            diagnol_sum += data[i][m-1-i]; 
        sums[k++] = diagnol_sum;
        
        std::sort(sums, sums+k, 
                [] (const int a, const int b) {return a > b;}); 
        
        for(int i=0; i<k; ++i)
            printf("%d ", sums[i]);
        printf("\n");
    }

    return 0;
}
