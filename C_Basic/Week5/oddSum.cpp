#include<iostream>
using namespace std;

int main(){
  int m, n, result = 0;
  cin >> m >> n;

  while(m <= n){
    //对 m 与 n 中的每个数，如果是奇数就加和，偶数则跳过
    if(m % 2 == 1)
      result += m;
    m++;
  }
  
  //最后输出
  cout << result << endl;
  return 0;
}