#include <iostream>
using namespace std;

int main(){

  int a,b,c,d;
  float aksi;

  cout << "Kehadiran : ";
  cin >> a;
  cout << "Tugas : ";
  cin >> b;
  cout << "UTS : ";
  cin >> c;
  cout << "UAS : ";
  cin >> d;

  aksi = (a+b+c+d)/4;
  cout << "Nilai Akhir " << aksi << endl;

  return 0;
}