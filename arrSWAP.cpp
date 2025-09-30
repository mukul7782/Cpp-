#include <iostream>

using namespace std;
void interchng(int num[],int n){
    for(int i=0;i<n-1;i=i+2){
        swap(num[i],num[i+1]);
        
    }
   
       
      
    
     
}
void printarray(int num[],int n){
    for(int i=0;i<n;i++){
        cout<<num[i]<<endl;
    }
}
int main(){
    int arr[8]={1,2,3,4,8,9,6,7};
    interchng(arr,8);
    printarray(arr,8);
}