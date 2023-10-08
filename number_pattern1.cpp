#include<iostream>
using namespace std;


int main(){

   int N;
   cin>>N;
   int i = 1;
   
   while(i<=N){
	   int j = 1;
	   int val = i;
	   while(j<=i){
		   cout<<val;
		   val++;
		   j++;
	   }
	   cout<<endl;
	   i++;
   }
  
}


