#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    if((marks>=90 && marks<=100)){
        cout << "A Grade" << endl;
    }
    else if((marks>=80 && marks<=89)){
        cout << "B Grade" << endl;
    }
    else if((marks>=70 && marks<=79)){
        cout << "C Grade" << endl;
    }
    else if((marks>=60 && marks<=69)){
        cout << "D Grade" << endl;
    }
    else{
        cout << "F Grade" << endl;
    }
    return 0;
}