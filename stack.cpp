#include<iostream>
#include<vector>

using namespace std;

class stack{
vector<int>v;
public:
//push
void push(int val){
    v.push_back(val);
}
// return top
int top(){
    cout<< v[v.size()-1];
}
// pop some fuction
void pop(){
    v.pop_back();
}
 void print() {
       if(v.empty()){
        cout<<"string is empty"<<endl;
       }else{
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
       }
}
};
int main(){
stack st;
st.push(7);
st.push(7);
st.push(14);
st.print();
st.pop();
st.print();
st.top();
}


