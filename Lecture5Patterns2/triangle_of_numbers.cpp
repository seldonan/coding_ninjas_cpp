/*Q)Print the following pattern for the given number of rows.
Pattern for N = 4

   1
  232
 34543
4567654

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int i = 1;

    while(i<=n){

        int k = 1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }

       int value = i;
       int j = 1;
        while(j<=i){
            cout<<value;
            value++;
            j++;
        }

        value = 2*(i-1);
        while(value>=i){
            cout<<value;
            value--;
          

        }
        cout<<endl;
        i++;
    }
}
