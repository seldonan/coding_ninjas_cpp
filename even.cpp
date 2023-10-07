// Q)Given a number N, print sum of all even numbers from 1 to N.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i= 0;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i+2;
    }
    cout<<sum<<endl;
    return 0;
}