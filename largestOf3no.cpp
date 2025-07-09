#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "You entered : " << a << "," << b << "," << c << endl;
    if(a>b && a>c){
        cout << a << endl;
    }
    else if(b>a && b>c){
        cout << b << endl;
    }
    else{
        cout << c << endl;
    }
    return 0;
}