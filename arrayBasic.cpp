#include <iostream>
using namespace std;
void printarray(int arr[],int n){
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<endl;
        }
       
    }
void printCH(char ch[],int n){
        for(int i=0;i<=n;i++){
            cout<<ch[i]<<" ";
        }
        
       
    }
int main(){
   int n=3;
   int crr[4]={1,2,3,4};
   printarray( crr,n);
   int sizeCRR=sizeof(crr);
   cout<<sizeCRR<<endl;
   int n1=5;
   char ch[5]={'a','b','c','d','e'};
   printCH(ch,n1);
  
    int n2=6;
   char Cch[7]={'a','b','c','d','e','f','g'};
   printCH(Cch,n2);
    
}