#include <iostream>

int main() {
    float a = 10; // Operador de asignación = 
    float b = 3;
    int c, d, e = 78.9, f = 67 ; // int -> integer
    char a1, a2, a3;
    float f1, f2, f3;
    std::cout << "Dame dos valores \\" << std::endl;
    std::cin >> f1 >> f2;
    std::cout << "Los valores son: " << f1 << " " << f2 << std::endl;
    std::cout << "Suma          : " << a + b << std::endl;
    std::cout << "Resta         : " << a - b << std::endl;
    std::cout << "Multiplicacion: " << a * b << std::endl;
    std::cout << "Division      : " << a / b << std::endl;
}