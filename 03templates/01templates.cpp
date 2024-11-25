// 01templates.cpp


#include <iostream>
// using namespace std;


// int max(int x, int y) {
//   cout << "from int overload" << endl;
//   return x > y ? x : y;
// }

// int max(float x, float y) {
//   cout << "from float overload" << endl;
//   return x > y ? x : y;
// }

template<class T>
T max(T x, T y) {
  return x > y ? x : y;
}



int main() {


#ifndef ONLINE_JUDGE
  freopen("output.txt", "w", stdout);
#endif


  auto num1 = max(2, 4);
  std::cout << num1 << std::endl;

  auto num = max(3.3f, 2.2f);
  std::cout << num << std::endl;


  return 0;


}
