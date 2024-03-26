/*Q)Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	double basic;
    char grade;
    cin>>basic;
    cin>>grade;

    double hra = 0.2*basic;
    double da = 0.5*basic;
    double pf = 0.11*basic;
    int allowance;
    if(grade == 'A'){
        allowance = 1700;
    }
    else if(grade == 'B'){
        allowance = 1500;
    }
    else{
        allowance = 1300;
    }
    
    double Total_Salary = basic + hra + da + allowance - pf;
    int ans = round(Total_Salary);
    cout<<ans;
	
}
