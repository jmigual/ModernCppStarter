#include <iostream>
#include <stdexcept>
#include <limits>

struct A {
  int a, b;
};

int main(const int argc, char** argv) {
  constexpr A a{1, 2};

  const auto b = std::numeric_limits<A>::max();

  std::cout << "a.a: " << a.a << " " << b.a << std::endl;
}
