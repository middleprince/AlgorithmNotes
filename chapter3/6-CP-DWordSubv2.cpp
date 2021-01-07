#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int MaxN = 256;
int main()
{
#ifdef _DEBUG
    ifstream cin("data.txt");
#endif // _DEBUG

    string str, src, dst;
    while (getline(cin, str))
    {
        getline(cin, src);
        getline(cin, dst);
        str = ' ' + str + ' ';
        src = ' ' + src + ' ';
        dst = ' ' + dst + ' ';
        for (size_t pos = str.find(src); pos != std::string::npos; pos = str.find(src, pos + 1U))
        {
            str.replace(pos, src.size(), dst);
        }
        str.erase(0U, 1U);
        str.erase(str.size() - 1U);
        cout << str << endl;
    }
#ifdef _DEBUG
    cin.close();
    system("pause");
#endif // _DEBUG

    return 0;
}

