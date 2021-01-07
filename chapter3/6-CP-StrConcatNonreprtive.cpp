#include<cstdio>
#include<cstring>
#include<map>
#include<stdexcept>

using std::out_of_range;
using std::map;

int main()
{
    char a[101], b[101], c[210];
    while(scanf("%s %s", a, b) != EOF) 
    {
        map<char, bool> char_map;
        memset(c, 0, 210);
        int idx = 0;
        char tmp;
        for(int i=0; i<strlen(a); ++i)
        {   try
            {
                tmp = a[i];
                if('A' <= tmp && tmp <= 'Z')
                    tmp += 'a' - 'A';
                    
                char_map.at(tmp); 
            }
            catch (out_of_range e) 
            {
                char_map[tmp] = 1;
                c[idx++] = tmp;
            }
        }

        for(int j=0; j<strlen(b); ++j)
        {
            try
            {
                tmp = b[j];
                if('A' <= tmp && tmp <= 'Z')
                    tmp += 'a' - 'A';
                char_map.at(tmp); 
            }
            catch (out_of_range e) 
            {
                char_map[tmp] = 1;
                c[idx++] = tmp;
            }
        }

        c[idx] = '\0';
        printf("%s\n", c);

    }
    return 0;    
}

