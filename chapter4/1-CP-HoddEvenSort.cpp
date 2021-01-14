#include<cstdio>
#include<vector>
#include<algorithm>

using std::vector;

int main()
{
    int temp;
    vector<int> odd, even;

    while(scanf("%d", &temp) != EOF) 
    {
        int n =9;
        odd.clear();
        even.clear();
        if(temp % 2 == 0)
            even.push_back(temp);
        else
            odd.push_back(temp);

        while(n--) 
        {
            scanf("%d", &temp); 
            if(temp % 2 == 0)
                even.push_back(temp);
            else
                odd.push_back(temp);
        }
        
        
        std::sort(even.begin(), even.end(), 
                [] (const int& a, const int& b) {return a < b;});

        std::sort(odd.begin(), odd.end(), 
                [] (const int& a, const int& b) {return a > b;});

        for(const auto& elem : odd)
            printf("%d ", elem);
        for(auto iter=even.cbegin(); iter!=even.cend(); ++iter)
        {
            if(iter+1 != even.cend())
                printf("%d ", *iter);
            else
                printf("%d\n", *iter);
        }
    }
    return 0;
    
    
}


