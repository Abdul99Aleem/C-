#include<iostream>
using namespace std;
int main(){
    // 4 7 10 13 16
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    for (int i = 4; i < (4 + n - 1 )* 3; i += 3)
    {
        cout<<i<<" ";
    }


}