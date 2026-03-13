#include <string>
#include <stdexcept>
#include "../include/calc.hpp"

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double div_safe(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Error: Division by zero");
    }
    return a / b;
}

double Calculate(double a, double b, std::string op) {
  if (op == "+") {
    return add(a, b);
  } else if (op == "-") {
    return sub(a, b);
  } else if (op == "*") {
    return mul(a, b);
  } else if (op == "/") {
    return div_safe(a, b);
  }
}