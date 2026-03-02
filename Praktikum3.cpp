#include <iostream>
using namespace std;

// deklarasi
int r;

//fungsi dan prosedur
void input (){
    cout << "Masukan Jari-Jari Lingkaran : ";
    cin >> r;
}

float luaslingkaran (int r){
    return r*r*3.14159;
}

void output(){
    cout << "Hasilnya : " <<luaslingkaran(r) << endl;
}

int main (){
    input ();
    output ();
}