#include<iostream>


using namespace std;

inline int square(int x);

int main() {
   int a = 100, b = 200;
   cout << "Simple Inline Function Example Program in C++\n";

   cout << "\nSquare value for " << a << " is          :" << square(a);
   cout << "\nSquare value for " << b << " is          :" << square(b);

   
}

// Inline square function
inline int square(int x) {
   return (x * x);
}