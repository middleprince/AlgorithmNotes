#include<cstdio>
#include<cstring>

int format(char strs[])
{
    bool space = true;
    for(int i=0; i<strlen(strs); ++i)
    {
        if(strs[i] == ' ' || strs[i] == '\t' || strs[i] == '\r' || strs[i] == '\n') 
            space = true; 
        else 
        {
            if(space && 'a' <= strs[i] && strs[i] <= 'z')
               strs[i] -= 'a' - 'A'; 
           space = false; 
        }
            
    }
    return 0;
}
int main()
{
   char tmp[200]; 
   while(gets(tmp))
   {
    format(tmp);   
    printf("%s\n", tmp); 
   }

   return 0;
}
