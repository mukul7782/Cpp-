#include <iostream>

using namespace std;

int getmax(int num[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getmin(int num[],int n){
    int min=999;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
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
    cout<<"max element is"<<endl;   
    int ans=getmax(arr,size);
    cout<<ans<<endl;
    cout<<"min element is ";
     int bns=getmin(arr,size);
    cout<<bns;
}