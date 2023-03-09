#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    cout << A * B;
    cout << " " << 2*(A+B) << endl;

    if(A==B){
        A = A;
        B = A;
        
        cout << A * B;
        cout << " " << 2*(A+B) << endl;

    }
    
}