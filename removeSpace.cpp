// Write a Program to Remove Spaces From a String
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Gee$ ks fo r$g e e ks";
    string str;
    int j = 0;
    for (char c : s)
    {
        if (c != ' ')
        {
            str += c;
        }
    }
    cout << "String : " << str << endl;
    return 0;
}