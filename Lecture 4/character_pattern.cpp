/*Q)Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int i = 1;
	while(i<=n){
		char start_char = 'A'+i-1;
		int j =1;
		while(j<=i){
			char ch = start_char+j-1;
			cout<<ch;
			j++;

		}
		cout<<endl;
		i++;
	}
}


