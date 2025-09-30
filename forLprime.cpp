
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isprime=1;
    for( int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
        else{
            isprime=1;
            break;
        }
        
    }
    if(isprime==0){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
}