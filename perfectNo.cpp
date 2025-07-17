#include<iostream>
using namespace std;
// checkPerfectNo(int n);
int main()
{
    int sum = 0,n,sum2;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1;i<n;i++){
        if (n%i==0)
        sum+=i;
      
        
    }
    if(sum == n){
        cout<<"It is a perfect number.";
    }
    else{
        cout<<"It is not a perfect number.";
    }
    return 0;
}