#include <iostream>

int main() {
  // Bilangan bulat
  int x = 5;
  int y = 3;

  // Operasi penjumlahan
  int hasilPenjumlahan = x + y;
  std::cout << "Hasil penjumlahan: " << hasilPenjumlahan << std::endl;

  // Operasi pengurangan
  int hasilPengurangan = x - y;
  std::cout << "Hasil pengurangan: " << hasilPengurangan << std::endl;

  // Operasi perkalian
  int hasilPerkalian = x * y;
  std::cout << "Hasil perkalian: " << hasilPerkalian << std::endl;

  // Operasi pembagian
  int hasilPembagian = x / y;
  std::cout << "Hasil pembagian: " << hasilPembagian << std::endl;

  // Operasi perpangkatan
  int hasilPerpangkatan = x * x * x;
  std::cout << "Hasil perpangkatan: " << hasilPerpangkatan << std::endl;

  // Perbandingan
  if (x > y) {
    std::cout << "x lebih besar dari y" << std::endl;
  } else if (x < y) {
    std::cout << "x lebih kecil dari y" << std::endl;
  } else {
    std::cout << "x sama dengan y" << std::endl;
  }

  return 0;
}