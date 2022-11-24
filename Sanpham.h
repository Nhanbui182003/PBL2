#ifndef Sanpham_h
#define Sanpham_h
#include <iostream>
#include <string>
using namespace std;
class sanpham {
    private:
        static int ma_sp;
        string ten_sp;
        long long dongia_sp;
    public: 
        sanpham (string ten = "sp1", long long dg = 0);
        sanpham (const sanpham &sp);
        ~sanpham();
        friend istream &operator >> (istream &in, sanpham &sp);
        friend ostream &operator << (ostream &out, const sanpham &sp);
        int get_masp();
        string get_tensp();
        long long get_dongiasp();
        void set_masp(int x);
        void set_tensp(string x);
        void set_dongiasp(long long x);
};
#endif