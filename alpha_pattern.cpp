/*Q)Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
 */

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    char ch = 'A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch;
            j++;  
        }
        cout<<endl;
        ch++;  //ch changes after each row therefore it is outside the inner while loop
        i++;
    }
}

