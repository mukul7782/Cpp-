#include <iostream>
using namespace std;
int ap(int n) {
	int ans=3*n+7;
	return ans;
}
int main() {
    cout<<"enter the value of n"<<endl;
	int n;
	cin>>n;
	int ans=ap(n);
	cout<<ans;

}