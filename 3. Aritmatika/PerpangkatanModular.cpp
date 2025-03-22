#include <iostream>

// Fungsi untuk melakukan perpangkatan modular
int powMod(int base, int exponent, int modulus) {
  int result = 1;
  while (exponent > 0) {
    if (exponent % 2 == 1) {
      result = (result * base) % modulus;
    }
    base = (base * base) % modulus;
    exponent /= 2;
  }
  return result;
}

int main() {
  int base, exponent, modulus;
  std::cout << "Masukkan base: ";
  std::cin >> base;
  std::cout << "Masukkan exponent: ";
  std::cin >> exponent;
  std::cout << "Masukkan modulus: ";
  std::cin >> modulus;

  int result = powMod(base, exponent, modulus);
  std::cout << "Hasil perpangkatan modular: " << result << std::endl;

  return 0;
}