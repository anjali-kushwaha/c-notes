
#include <iostream>
using namespace std;

int main()
{   int num;
    int arr[6]={23,78,12,2,4};
    num=arr[0];
    cout<<num<<endl;
    for(int i=1 ;i<6-1;i++)
    {   
        if(arr[i]<num)
        {
            num=arr[i];
            cout<<num<<" ";
        }
    }
    
    cout<<endl<<num;
    return 0;
}
