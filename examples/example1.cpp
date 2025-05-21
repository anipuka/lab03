#include "print.hpp"

int main() {
    print("hello"); // Неявное преобразование в std::string
    
    std::ofstream file("log.txt");
    print(std::string("file content"), file); // Явное преобразование
    
    return 0;
}
