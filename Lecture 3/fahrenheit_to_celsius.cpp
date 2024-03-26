/*Q)Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
input and output should be integers.
constraints:
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 
*/

#include<iostream>
using namespace std;

int main(){
    int S,E,W;
    cin>>S;
    cin>>E;
    cin>>W;

    for(int currentFV= S; currentFV <= E; currentFV= currentFV + W ){
        int celV = (5* (currentFV -32))/9;
    cout<<currentFV<<"\t"<<celV<<endl;


    }

}