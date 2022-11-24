#ifndef Listsp_h
#define Listsp_h
#include "sanpham.h"
#include <iostream>
#include <string>
using namespace std;
struct node_sp{
    sanpham data;
    node_sp *next;
    node_sp *prev;
};
typedef node_sp *SP;
class Listsp {
    private: 
        SP head;
        SP last;
    public:
        Listsp();
        ~Listsp();

        void xuatListsp();
        void themsp(Listsp &ps);
        void xoasp();

        void binarySearch(int , int, string ten);
        void shellSort(bool comFunc(Listsp &, Listsp &));

};
#endif 
