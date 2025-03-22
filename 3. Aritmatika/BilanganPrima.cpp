#include <iostream>

// Fungsi untuk memeriksa apakah suatu bilangan adalah bilangan prima
bool isPrima(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  std::cout << "Masukkan suatu bilangan: ";
  std::cin >> n;

  if (isPrima(n)) {
    std::cout << n << " adalah bilangan prima" << std::endl;
  } else {
    std::cout << n << " bukan bilangan prima" << std::endl;
  }

  return 0;
}