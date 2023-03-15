#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,m,s,t;
    cin >> t;

    h = t/60/60;
    m = t%3600/60;
    s = t%3600%60;

    cout << h << ":" << m << ":" << s << endl;


    
}