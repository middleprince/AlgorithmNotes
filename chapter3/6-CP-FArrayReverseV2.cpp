#include<iostream>
#include<string>

using namespace std;
 
 
int main()
{
    string str;
    while(getline(cin, str))
    {
        for(int i=0, j=str.size()-1; i<j; i++, j--)
        {
            swap(str[i], str[j]);
        }
        cout << str<< endl;
    }
    return 0;
}
