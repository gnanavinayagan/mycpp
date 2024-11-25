// 01templates.cpp


#include <iostream>
// using namespace std;


template<class T>
T max(T x, T y) {
  std::cout << typeid(T).name() << std::endl;
  return x > y ? x : y;
}

template char max(char x, char y);


// explicitly instantiate function template





int main() {
  freopen("output.txt", "w", stdout);


  auto num1 = max(static_cast<float>(2), 4.4f);
  std::cout << num1 << std::endl;

  auto num = max<double>(3, 2.2f);
  std::cout << num << std::endl;

  int (*pfn)(int, int) = max; // instantiate max for integer template
  // caught address - compiler instantiate



  return 0;


}
