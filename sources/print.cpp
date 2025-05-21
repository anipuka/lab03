#include "print.hpp"

// Общая реализация
void print(const std::string& text, std::ostream& out) {
    out << text;
}

// Специализация для файлов
void print(const std::string& text, std::ofstream& out) {
    if (out.is_open()) {
        out << text;
    } else {
        std::cerr << "Error: File is not open!\n";
    }
}
