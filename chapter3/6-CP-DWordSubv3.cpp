#include<cstdio>
#include<cstring>

#define MAX 1024

int addSpace(char *strs)
{
    int len = strlen(strs);
    for(int i=len-1; i>=0; --i)
        strs[i+1] = strs[i];

    strs[0] = ' ';
    strs[++len] = ' ';
    strs[++len] = '\0';
    return len;
}

int main()
{
    char str_input[MAX]; 
    char seek[120];
    char rep[120];


    // DONE: find wrong anwser error.
    // FIXED: the whole word can not be sepreated in pices.
    while(fgets(str_input, 1024, stdin) && fgets(seek, 1024, stdin) 
            && fgets(rep, 1024, stdin))
    {
        // remove the \n 
        str_input[strlen(str_input)-1] = '\0';
        seek[strlen(seek)-1] = '\0';
        rep[strlen(rep)-1] = '\0';

        // add the space to identify the word unit
        addSpace(str_input);
        addSpace(seek);
        addSpace(rep);
        
    #ifdef _DEBUG
        printf("input string length is:%d", strlen(str_input));
    #endif
        
        for(int i=0; i<strlen(str_input); )
        {
            // TODO: finish the outputs format problem for which remove extra space.
            if(!strncmp(str_input+i, seek, strlen(seek))) 
            {
                printf("%s", rep);
                i += strlen(seek);
            }
            else if( (str_input[i+1] == '\0' && str_input[i] == ' ' )
                    || (i==0 && str_input[i] == ' '))
                    continue; 
                else
                    printf("%c", str_input[i++]);
        } 
    }

    return 0;
}
