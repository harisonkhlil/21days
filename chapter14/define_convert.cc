#include <cmath>
#include <iostream>

template <typename T> T square(T x) { return x * x; }

template <typename T> T area_circle(T r) {
  const T pi = std::acos(-1);
  return pi * square(r);
}

template <typename T> T Max(T a, T b) { return a > b ? a : b; }

template <typename T> T Min(T a, T b) { return a < b ? a : b; }

int main() {
  std::cout << "Enter a number: ";
  double num = 0;
  std::cin >> num;
  std::cout << "square(" << num << ") = " << square(num) << std::endl;
  std::cout << "Area of a circle with radius " << num << " is: ";
  std::cout << area_circle(num) << std::endl;

  std::cout << "Enter another number: ";
  double num2 = 0;
  std::cin >> num2;
  std::cout << "min(" << num << ", " << num2 << ") = ";
  std::cout << Min(num, num2) << std::endl;

  std::cout << "max(" << num << ", " << num2 << ") = ";
  std::cout << Max(num, num2) << std::endl;
  return 0;
}