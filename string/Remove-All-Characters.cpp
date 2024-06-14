// Online C++ compiler to run C++ program online
// Remove All Characters From a String Except Alphabets
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Gee$ksfor$geeks";
    string str;
    int j = 0;
    for (char c : s)
    {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            str += c;
        }
    }
    cout << "String : " << str << endl;
    return 0;
}