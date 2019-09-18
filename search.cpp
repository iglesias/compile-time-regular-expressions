#include <iostream>
#include <string>

#include <ctre.hpp>

int main()
{
  const std::string input{"test"};
  constexpr ctre::character<'T'> pattern;
  std::cout << ctre::search_re(input.begin(), input.end(), pattern) << '\n';
  ctre::search_re(input.begin(), input.end(), pattern);
}
