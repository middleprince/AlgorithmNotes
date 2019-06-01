/* 利用回溯法来解决n皇后问题。
 * 1⃣️  利用排列将n皇后问题进行抽象，将同行同列情况排除减少枚举的数量
 * 2⃣️  在枚举之前检查当前的位置是否与之间的位置呈斜线，利用边长相等： * |a.index - b.index| = |p[a.index] - p[b.index]|此情况下 利用边长相等
 * 为斜边情况， 停止枚举向上回溯。
 */
#include <cstdio>
#include <cstring> 
#include <cstdlib>
#define MAX 20

int p[MAX], solution, n;
bool hashTable[MAX] = {false};

void queenPermute(int index)
{
    if(index == n+1){    
        solution++;
        return;
    }
    for(int x=1; x<=n; x++){
        if(hashTable[x] != true){
            bool flag = true; 

            for(int pre=1; pre<index; pre++){
                if(abs(pre-index) == abs(p[pre] - x)){
                    flag= false;
                    break;
                }
            }
            //结束当前的继续枚举，回溯到上一层。
            if(flag){ 
                p[index] = x;
                hashTable[x] = true;
                queenPermute(index+1);
                hashTable[x] = false;
            }
        }       
    }
}

int main(void)
{
    if(scanf("%d", &n) != EOF && n!=0){
        queenPermute(1); 
        printf("%d\n", solution);
    } 
    return 0;
}
