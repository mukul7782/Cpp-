#include <iostream>

using namespace std;
int sum(int num[],int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+num[i];
    }
    return sum;
}
int main(){
 int arr[10];
 int size;
 cout<<"enter the size"<<endl;
 cin>>size;
 cout<<"enter the elements"<<endl;
 for(int i=0;i<size;i++){
     cin>>arr[i];
 }
 int sumarray=sum(arr,size);
 cout<<sumarray<<endl;
}