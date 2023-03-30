#include<bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
      break;
    }
    
    // xとyを小さい順に並べ替える
    if (x > y) {
      swap(x, y);
    }
    
    // xとyを出力する
    cout << x << " " << y << endl;
  }
  
  // 終了
  return 0;
}
