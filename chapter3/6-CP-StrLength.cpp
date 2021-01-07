#include<cstdio>
#include<cstring>

#define MAXIN 60

int main()
{
    char a[MAXIN], b[MAXIN];
    int m;
    
    scanf("%d", &m);
    while(m--)
    {
        scanf("%s %s", a, b); 
        int longer = strlen(a) > strlen(b) ? 1 : (strlen(a) == strlen(b) ? 0 : -1);
        switch(longer)
        {
            case 1:
                printf("%s is longer than %s\n", a, b);
                break;
            case 0:
                printf("%s is equal long to %s\n", a, b);
                break;
            case -1:
                printf("%s is shorter than %s\n", a, b);
                break;
        }
        
    }
    return 0;
}
