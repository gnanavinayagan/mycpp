// 01templates.cpp


#include <iostream>
// using namespace std;

template<int size>
void print() {
  std::cout << size << std::endl;
}

// template<typename T>
// T sum(T *par, int size) {
//   T out{};
//   for (int i = 0; i < size; i++) {
//     out += par[i];
//   }
//   return out;
// }


template<typename T, int size>
T sum(T (&par)[size]) {
  T out{};
  for (int i = 0; i < size; i++) {
    out += par[i];
  }
  return out;
}



int main() {
  freopen("output.txt", "w", stdout);

  // passing non type (not an argument to a template)
  //print<3>(); //

  int arr[] {2, 3, 10, 5};
  int (&ref)[4] = arr;

  //int res1 = sum(arr, 4);
  //std::cout << res1 << std::endl;

  int res2 = sum(ref);
  std::cout << res2 << std::endl;


  // print<static declared variable>();
  // non-type template arguments - constexpr - constant expressions




  return 0;

}
