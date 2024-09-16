#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
  cout << "Menghitung Volume dan Luas Permukaan Kerucut" << endl;
  cout << endl;
 
  float volume, luas_permukaan;
  float jari2, tinggi, garis_pelukis, luas_alas, luas_selimut;
  int r,t;


 
  cout << "Masukkan jari-jari kerucut: ";
  cin >> r;
  cout << "Masukkan tinggi kerucut: ";
  cin >> t;
  cout << endl;
 
  garis_pelukis = sqrt((r * r) + (t * t));
  luas_selimut = (3.14) * r * garis_pelukis;
  luas_alas = (3.14) * r * r;
 
  volume = (0.33) * (3.14) * r * r * t;
  luas_permukaan = luas_alas + luas_selimut;

 
  cout << "Luas permukaan kerucut = " << luas_permukaan << endl;
  cout << "Volume kerucut = " << volume << endl;
 
  return 0;
}
