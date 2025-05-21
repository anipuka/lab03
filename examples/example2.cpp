#include "print.hpp"  // Исправлено имя заголовочного файла
#include <fstream>
#include <string>

int main(int argc, char** argv)  // Исправлено aargc -> argc
{
    std::ofstream file("log.txt");
    
    // Проверяем, что файл открылся успешно
    if (!file.is_open()) {
        std::cerr << "Failed to open log.txt" << std::endl;
        return 1;
    }
    
    // Выводим в файл
    print(std::string("hello"), file);
    
    // Закрываем файл
    file.close();
    
    return 0;
}
