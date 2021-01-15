#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using std::vector;
//using std::string;

struct Student{
    int no;
    //string name;
    char name[20];
    int grades;
};
    
// FIXED: Fix error 50
int main()
{

    int n, c, item = 0; 
    vector<Student> data;
    while(scanf("%d %d", &n, &c) != EOF && n!=0)
    {
        ++item;
        data.clear();
        //int temp_no, temp_grade; 
        //char name[20];
        Student in;

        while(n--)
        {
            scanf("%d %s %d", &(in.no), in.name, &(in.grades));
            data.push_back(in); 
        }
        
        switch(c)
        {
            case 1: 
                std::sort(data.begin(), data.end(), 
                        [] (const Student& a, const Student &b) 
                            {return a.no < b.no;} ); 
                break;
            case 2:
                std::sort(data.begin(), data.end(), 
                        [] (const Student& a, const Student &b) 
                           //{return a.name.compare(b.name) == 0 ? (a.no < b.no) : (a.name.compare(b.name) <= 0);} ); 
                           {return strcmp(a.name, b.name) == 0 ? (a.no < b.no) : (strcmp(a.name, b.name) < 0);} ); 
                break;
                        
            case 3:
                std::sort(data.begin(), data.end(), 
                        [] (const Student& a, const Student &b) 
                           {return a.grades == b.grades ? (a.no < b.no) : (a.grades < b.grades);} ); 
                break;
        }

        // fixed the bug, which i print state c instead of ith case. 
        printf("Case %d:\n", item);
        for(auto const& iter : data)
        {
            printf("%06d %s %d\n", iter.no, iter.name, iter.grades); 
        }
        
    }
    
}

