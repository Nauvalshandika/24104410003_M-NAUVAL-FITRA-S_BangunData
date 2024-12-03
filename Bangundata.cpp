#include <iostream>
#include <cmath>
using namespace std;

void persegi(int sisi) {
    int luas = sisi * sisi;
    int keliling = 4 * sisi;
    cout << "Luas : " << luas << ", Keliling : " << keliling << "\n" << endl;
   
}

void persegipanjang(int panjang, int lebar) {
    int luas = panjang * lebar;
    int keliling = 2 * (panjang + lebar);
    cout << "Luas : " << luas << ", Keliling : " << keliling << "\n" << endl;
}

void segitigasikusiku(int alas, int tinggi) {
    double luas = 0.5 * alas * tinggi;
    double keliling = alas + tinggi + sqrt(alas * alas + tinggi * tinggi);
    cout << "Luas : " << luas << ", Keliling : " << keliling << "\n" << endl;
}

void lingkaran(double jarijari) {
    double pi = 3.14;
    double luas = pi * jarijari * jarijari;
    double keliling = 2 * pi * jarijari;
    cout << "Luas : " << luas << ", Keliling : " << keliling << "\n" << endl;
}

    int main() {
        int sisi, panjang, lebar, alas, tinggi, jarijari;
    cout << "Sisi persegi : ";
    cin >> sisi;
    cout; persegi(sisi);

    cout << "Sisi panjang persegi panjang : ";
    cin >> panjang;
    cout << "Sisi lebar persegi panjang : ";
    cin >> lebar;
    cout; persegipanjang(panjang, lebar);

    cout << "Alas segitiga siku-siku : ";
    cin >> alas;
    cout << "Tinggi segitiga siku-siku : ";
    cin >> tinggi;
    cout; segitigasikusiku(alas, tinggi);

    cout << "Jari-jari lingkaran : ";
    cin >> jarijari;
    cout; lingkaran(jarijari);
}