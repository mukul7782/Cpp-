#include <iostream>
using namespace std;
int main()
{   
    int i=1;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}