#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main(){
    stack<int>s;
  s.push(2);
   s.push(2);
    s.push(2);
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
     s.push(2);
   s.push(2);
    s.push(2);
    s.pop();
    s.top();
    while(s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;

}