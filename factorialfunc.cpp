#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int ans= factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}


int main(){
    int n;
    int r;
    cin>>n;
    cin>>r;
    cout<<nCr(n,r)<<endl;
}