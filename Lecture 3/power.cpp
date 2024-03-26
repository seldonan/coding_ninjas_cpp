/*Q)Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int x;
	int n;
	cin>>x;
	cin>>n;
	int ans = pow(x,n);
	cout<<ans;
	
}
