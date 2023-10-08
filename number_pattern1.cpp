/*Q)Print the following pattern
Pattern for N = 4
1
23
345
4567*/

#include<iostream>
using namespace std;


int main(){

   int N;
   cin>>N;
   int i = 1;
   
   while(i<=N){
	   int j = 1;
	   int val = i;  //initial value of each row is the row no. itself
	   while(j<=i){
		   cout<<val;
		   val++;
		   j++;
	   }
	   cout<<endl;
	   i++;
   }
  
}


