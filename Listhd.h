#ifndef Listhd_h
#define Listhd_h
#include "HoaDon.h"

struct node_hd{
    HoaDon data;
    node_hd *prev;
    node_hd *next;
};

class ListHD {
    private:
        node_hd *head;
        node_hd *last;
    public:
        ListHD();
        ~ListHD();
        void AddNodeHD(const HoaDon &);
        void DeleteNodeHD(const HoaDon &x);
//      Thêm node_hd
//      Xoa node_hd
//      Sửa list_hd
//      Tìm kiếm node_hd
//      In list HD
};

#endif