#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter Year: ";
    cin >> year;
    if((year%4==0 && year%100 != 0) || (year%400==0)){
        cout << "It is a Leap Year" << endl;
    } 
    else{
        cout << "It is not a Leap Year" << endl;
    }
    return 0;
}