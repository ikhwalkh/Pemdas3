//libary
#include <iostream>
using namespace std;

// deklarasi untuk global
int r;

//implementasi fungsi dan prosedur
void input (){
    cout << "Masukan Jari-Jari Lingkaran : ";
    cin >> r;
}
//float untuk operasi
float luaslingkaran (int r){
    return 3.14159*r*r;
}
//void untuk operasi 
void output(){
    cout << "Hasilnya : " <<luaslingkaran(r) << endl;
}
//untuk menampilkan hasilnnya
int main (){
    input ();
    output ();
}