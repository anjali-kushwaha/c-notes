// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    int count=0;
    string s="hjkilopwryuio";
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    cout<<"string length is "<<count;
    return 0;
}