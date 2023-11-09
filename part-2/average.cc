// Ernesto Moran
// emoran19@csu.fullerton.edu
// @Ernesto952
// Partners: @Ernesto952

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc < 2) {
    std::cerr << "Error: At least one command line argument is required."
              << std::endl;
    return 1;
  }

  double sum = 0.0;
  bool first = true;
  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      sum += std::stod(argument);
    }
  }

  double average = sum / (argc - 1);

  std::cout << "average = " << average << std::endl;
  return 0;
}
