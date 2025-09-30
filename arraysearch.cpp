#include <iostream>

using namespace std;
bool search(int num[],int key,int n){
    for(int i=0;i<=n;i++){
        if(num[i]==key){
            return 1;
            
        }
        
    }
   return 0;
}
int main(){
    
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key ;
    cout<<"enter the key";
    cin>>key;
    bool found=search(arr,key,10);
        if(found){
            cout<<"key is present"<<endl;
            
        }
        else{
            cout<<"key is not present";
        }
}