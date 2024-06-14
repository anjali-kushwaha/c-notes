// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            cout << "vowel";
        else
            cout << "consonant";
    }
    return 0;
}