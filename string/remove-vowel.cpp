// Online C++ compiler to run C++ program online
// Remove the Vowels from a String
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "heLlonicetomeetyou";
    string str;
    for (char c : s)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            str += c;
        }
    }
    cout << "String without vowels: " << str << endl;
    return 0;
}