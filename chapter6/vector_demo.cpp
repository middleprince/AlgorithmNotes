#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> data;
    for(i=0; i<100; i++)    
        data.push_back(i+1);
    while(i--)
        printf("%d ", data[i]);

    for(int j=0; j<5; j++)
        data.insert(data.begin()+0, 100);
    
    vector<int>::iterator it; 
    for(it=data.begin(); it!=data.end(); it++)
        printf("%d ", *it);
    printf(" var 2d vector\n");

    vector< vector<int> > nearMatrix(4);

    for(int j=0; j<4; j++)
        for(int k=0; k<5; k++){
            nearMatrix[j].push_back(k+1);
        }

     for(int j=0; j<4; j++)
        for(int k=0; k<5; k++){
            printf("%d ", nearMatrix[j][k]); 
        }
    
     return 0;


}
