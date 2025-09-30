#include <iostream>
using namespace std;
int main()
{

int j=1;
int n;
cin>>n;
while(j<=n){
    int i=1;
    while(i<=n){
    cout<<"*";
    i++;
    }
    cout<<endl;
    j++;
}
   
return 0;
}