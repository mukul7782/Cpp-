#include <iostream>

using namespace std;
void reversearray(int num[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
}
void printarray(int num[],int n){
    for(int i=0;i<n;i++){
        cout<<num[i]<<endl;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    reversearray(arr,4);
    printarray(arr,4);
}