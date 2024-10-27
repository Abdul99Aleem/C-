#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    char c=65;
    cout<<"Enter n value"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n  ; j++)
        {
            cout<<" ";
            cout<<c+i-1;
            
        }
        cout<<endl;
        i++;
    }
   
    return 0;
}