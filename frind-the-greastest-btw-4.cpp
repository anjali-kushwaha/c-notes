#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    (a>b && a>c && a>d )?cout<<"a is "<<a :((b>c && b>d) ? cout<<"b is "<<b :
    ((c>d)?cout<<"c is "<<c:cout<<"d is "<<d)); 
    return 0;
}