#include "Sanpham.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int sanpham:: ma_sp;
sanpham :: sanpham(string ten , long long dg ){
    this->ma_sp++;
    this->ten_sp = ten;
    this->dongia_sp = dg;
}
sanpham:: sanpham(const sanpham &sp){
    this->ten_sp = sp.ten_sp;
    this->dongia_sp = sp.dongia_sp;
    ma_sp++;
}
sanpham :: ~sanpham(){
    ma_sp--;
}
istream &operator >> (istream &in, sanpham &sp){
    cout << "Nhap ten san pham: "; getline(in,sp.ten_sp);
    cout << "Nhap don gia san pham: "; in >> sp.dongia_sp;
    return in;
}
ostream &operator << (ostream &out, const sanpham &sp){
    out << setw(6) << sp.ma_sp << setw(10) << sp.ten_sp << setw(10) << sp.dongia_sp << endl;
} 
int sanpham:: get_masp(){
    return this->ma_sp;
}
string sanpham:: get_tensp(){
    return this->ten_sp;
}
long long sanpham:: get_dongiasp(){
    return this->dongia_sp;
}
void sanpham:: set_masp(int x){
    this->ma_sp = x;
}
void sanpham:: set_tensp(string x){
    this->ten_sp = x;
}
void sanpham:: set_dongiasp(long long x){
    this->dongia_sp = x;
}

int main(){
    sanpham s("sua",8000);
    cout << s;
}