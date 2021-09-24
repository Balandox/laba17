#include <iostream>
#include "Matrix.hpp"
#include "Point.hpp"

int main() {
int rows1 = 0, columns1 = 0, rows2 = 0, columns2 = 0;
int row_get = 0, colum_get = 0, row_set = 0, colum_set = 0;
int val;
bool ok = false;
std::cout << "Input rows of matrix1: ";
std::cin >> rows1;
std::cout << "Input columns of matrix1: ";
std::cin >> columns1;
Matrix <int> mi(rows1, columns1);
std::cin >> mi;
std::cout << mi;

std::cout << "Testing the get function\n";
while (ok == false) {
try {
ok = true;
std::cout << "Input row position: ";
std::cin >> row_get;
std::cout << "Input colum position: ";
std::cin >> colum_get;
std::cout << mi.get(row_get, colum_get);
}
catch (std::exception &e) {
ok = false;
std::cerr << "Error: " << e.what() << " Try again.\n" << std::endl;
}
}
ok = false;
std::cout << "\nTesting the set function\n";
while (ok == false) {
try {
ok = true;
std::cout << "Input row position: ";
std::cin >> row_set;
std::cout << "Input colum position: ";
std::cin >> colum_set;
std::cout << "input value to set: ";
std::cin >> val;
mi.set(row_set, colum_set, val);
std::cout << mi;
}
catch (std::exception& e) {
ok = false;
std::cerr << "Error: " << e.what() << " Try again.\n" << std::endl;
}
}
ok = false;
std::cout << "\nTesting the multiplication function\n";
while (ok == false) {
try {
ok = true;
std::cout << "Input rows of matrix2: ";
std::cin >> rows2;
std::cout << "Input columns of matrix2: ";
std::cin >> columns2;
Matrix <int> mi1(rows2, columns2);
std::cin >> mi1;
std::cout << mi.mul(mi1);
}
catch (std::exception& e) {
ok = false;
std::cerr << "Error: " << e.what() << std::endl;
}
}
return 0;
}