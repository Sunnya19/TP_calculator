#include <iostream>
#include <string>
#include <sstream>

#include "../include/calc.hpp"

void Hint() {
    std::cout << "Неверный ввод.\n" << "Подсказка по пользовнию:\n"
    << "Формат: <число> <операция> <число>\n" << "Примеры:\n" << "  2 + 3\n"
    << "  10.5 / 2\n" << "Допустимые операции: + - * /\n";
}

bool IsValidOperation(const std::string& op) {
  return op == "+" || op == "-" || op == "*" || op == "/";
}

int main(int argc, char* argv[]) {
  if (argc <= 3) {
    std::cout << "Недостаточно аргументов" << std::endl;
    Hint();
    return 1;
  } else if (argc >= 5) {
    std::cout << "Лишние аргументы" << std::endl;
    Hint();
    return 1;
  }

  std::string first = argv[1];
  std::string op = argv[2];
  std::string second = argv[3];
  
  if (!IsValidOperation(op)) {
    std::cout << "Неподдерживаемая операция" << std::endl;
    Hint();
    return 1;
  }

  double a, b;

  try {
    a = std::stod(first);
    b = std::stod(second);
  }
  catch (...) {
    std::cout << "Ошибка. Первое и третье значения должны быть числами" << std::endl;
    Hint();
    return 1;
  }

  double result;
  try {
    result = Calculate(a, b, op);
  }
  catch (std::invalid_argument &e) {
    std::cout << e.what() << std::endl;
    Hint();
    return 1;
  }

  return 0;
}