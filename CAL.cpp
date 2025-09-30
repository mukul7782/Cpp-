#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;                            

    int b;
    cin>>b;

   

    char op;
    cin>>op;
    
    int ans=0;
    switch (op)
    {
    case '+':
        ans=a+b;
        cout<<ans;
        break;
    
        case '-':
        ans=a-b;
         cout<<ans;
        break;

        case '*':
        ans=a*b;
         cout<<ans;
        break;

        case '/':
        ans=a/b;
         cout<<ans;
        break;

    default:
        break;
    }
}