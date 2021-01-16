#include<cstdio>
#include<map>
#include<vector>
#include<stdexcept>

using std::map;
using std::vector;

int main()
{
    vector<char> data, sub; 
    map<char, vector<int> > map_loc;
    char c;
    while((c = getchar()) != EOF)
    {
        int loc = 0;
        data.push_back(c);
        map_loc[c].push_back(loc);
        while((c = getchar()) != EOF && c != '\n')
        {
            data.push_back(c);
            map_loc[c].push_back(++loc);
        }
        while((c = getchar()) != EOF && c != '\n')
        {
            sub.push_back(c);
        }
        
        for(const auto& elem : sub)
        {
            try
            {
                map_loc.at(elem);
            }
            catch(std::out_of_range)
            {
                continue;
            }
            for(auto iter=map_loc.at(elem).cbegin(); 
                    iter != map_loc.at(elem).cend(); ++iter) 
            { 
                data.at(*iter) = '\0';
            }
        }

        for(auto iter=data.cbegin(); iter!=data.cend(); ++iter)
        {
            if(*iter == '\0') 
                continue;
            printf("%c", *iter);
        }
        
        printf("\n");
        
    }
    return 0;
}
