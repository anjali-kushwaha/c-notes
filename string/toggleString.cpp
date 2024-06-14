// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    int count=0;
    string s="heLlonicetomeetyou";
    for(int i=0;s[i]!='\0';i++)
    {
      if(i%2==0)
      {
          s[i]=toupper(s[i]);
      }
      else
      {
          s[i]=tolower(s[i]);
      }
    }
    cout<<"string : "<<s;
    return 0;
}

// O/P:-
// string : HeLlOnIcEtOmEeTyOu