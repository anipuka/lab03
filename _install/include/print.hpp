#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <fstream>
#include <string>

// Основная версия
void print(const std::string& text, std::ostream& out = std::cout);

// Специальная версия для файлов
void print(const std::string& text, std::ofstream& out);

#endif
