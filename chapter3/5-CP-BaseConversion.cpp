#include<cstring>
#include<cstdio>
#include<map>


using std::map;

static char base_map[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
    'A', 'B', 'C', 'D', 'E', 'F'};

static map <char, int>base2int = {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, 
    {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'A', 10},
    {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}};

long long toTenBase(char a[], int P)
{
    long re = 0;
    long product = 1;
    auto len = strlen(a);
    while(len--)
    {
        re += base2int.at(toupper(a[len])) * product;
        
        product *= P;
    }
    return re;
}

int toQBase(long long a, char res[], int Q)
{
   int pos = 0; 
   do
   {
        res[pos++] = base_map[a % Q];
        a /= Q; 
   } while(a != 0);
   return pos;
}

void print(char res[], int pos)
{
    while(pos--)
        printf("%c", res[pos]);
}


int main()
{
    int a, b;
    char n[40], res[40];
    long long  tmp;
    int pos;
    // FIXED: multiple inputs 
    while(scanf("%d %s %d", &a, n, &b) != EOF)
    {
    strcpy(res, n); 

    tmp = toTenBase(res, a); 
    pos = toQBase(tmp, res, b); 

    print(res, pos);
    printf("\n");
    }
    return 0;
}
