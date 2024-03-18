#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2000, hAir = 3000;
string nama;

void input()
{
    cout << "Masukan nama = ";
    cin >> nama;
    cout << "Masukan Jumlah telor = ";
    cin >> nTelor;
    cout << "Masukan Jumlah mie = ";
    cin >> nMie;
    cout << "Masukan Jumlah Air = ";
    cin >> nAir;
}

int hitungHarga() {
    return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display() {
    cout << "Nama = " << nama << endl;
    cout << "jumlah Telor = " << nTelor << endl;
    cout << "jumlah Mie = " << nMie << endl;
    cout << "jumlah Air = " << nAir << endl;
    cout << "Total harga Rp. = " << hitungHarga() << endl;
}
int main()