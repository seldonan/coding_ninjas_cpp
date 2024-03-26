/*Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int sum_e = 0;
	int sum_o=0;
	while(n>0){
		int next = n%10;
                if (next % 2 == 0) {
                  sum_e += next;
                }
				else{
					sum_o+=next;
				}
				n=n/10;
        }
		cout<<sum_e<<" "<<sum_o;

	
}
