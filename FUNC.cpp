#include <iostream>
using namespace std;
int power() {
    int a,b;
    cin>>a;
    cin>>b;
	int ans=1;
	for(int i=1; i<=b; i++) {
		ans=a*ans;

	}
	return ans;
}
int main() {
/*	int a;
	cin>>a;
	int b;

	cin>>b;

	int answer=power(a,b);
	cout<<answer;
	
*/
int answer=power();
cout<<answer;
int answer1=power();
cout<<answer1;
int answer2=power();
cout<<answer2;

}