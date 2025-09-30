#include <iostream>
using namespace std;
bool iseven(int a){
    if(a&1){
        return 0;//odd
    }
    else{
        return 1;//even
}
}
int main(){
    cout<<"enter the number";
    int num;
    cin>>num;
    if(iseven(num)){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is not even"<<endl;
    }
}