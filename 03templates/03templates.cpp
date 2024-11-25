// 01templates.cpp


#include <iostream>
// using namespace std;


template<class T>
T max(T x, T y) {
  std::cout << typeid(T).name() << std::endl;
  return x > y ? x : y;
}


// Explicit instantiation
template
char max(char x, char y);

// it should be defined in cpp and not in header file


// Explicit specialization
template<>
const char * max<const char*>(const char *x, const char* y) {
  std::cout << "form custom function" << std::endl;
  return strcmp(x, y) > 0 ? x : y;
}




int main() {
  freopen("output.txt", "w", stdout);


  const char *b{"B"};
  const char *a{"A"};

  auto s = max(a, b);

  std::cout << "maximum: " << s << std::endl;



  return 0;

}
