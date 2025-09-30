#include <iostream>

using namespace std;
int gettmax(int num[],int n){
    int maxi=0;
     for(int i=0;i<n;i++){
    maxi=max(maxi,num[i]);
}
return maxi;
}
int gettmini(int num[],int n){
    int mini=999;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    }
    return mini;
}


int main(){
    cout<<"enter the size"<<endl;
    int size;
    cin>>size;
    int arr[100];
    cout<<"enter the elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"max element is "<<endl;
    int sol=gettmax(arr,size);
    cout<<sol<<endl;
     cout<<"min element is "<<endl;
    int soll=gettmini(arr,size);
    cout<<soll;
}