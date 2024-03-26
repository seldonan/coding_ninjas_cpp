/*Q)Print the following pattern
Pattern for N = 4
   1
  23
 345
4567
*/

#include<iostream>
using namespace std;


int main(){

	int N;
	cin>>N;
	int i = 1;
	while(i<=N){
		int k = 1; //k is for space
		while(k<=N-i){  //loop for space
			cout<<" ";
			k++;
		}
		int val = i;   //initial value of each row is the row no. itself
		int j = 1;
		while(j<=i){
			cout<<val;
			j++;
			val++;
		}
		cout<<endl;
		i++;
	}
}


