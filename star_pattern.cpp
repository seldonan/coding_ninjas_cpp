/*Q)Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******

*/

#include<iostream>
using namespace std;


int main(){

   int n;
   cin>>n;
   int i =1;
   
   while(i<=n){
	   int k =1;
	   while(k<=n-i){
		   cout<<" ";
		   k++;
	   }
	   int j=1;
	   
	   while(j<=(i*2)-1){ //for ith row there is/are (i*2)-1 column(s). Eg: i=3, j = (3*2)-1 = 5.
		   
		   cout<<"*";
		   
		   j++;
	   }
	   cout<<endl;
	   i++;
   }
  
}


