#include"ListHD.h"
#include"HoaDon.h"
#include <iostream>
#include <string>

using namespace std;

void ListHD::AddNodeHD( const HoaDon &x){
    node_hd *newnode = new node_hd;
    newnode->data = x;
    newnode->next = NULL;
    if (head==NULL){
        newnode->prev = NULL;
        head = newnode;
        last = newnode;
    } 
    else
    {
        last->next = newnode;
        newnode->prev = last;
        last = newnode;
    }
}

void ListHD::DeleteNodeHD(const HoaDon &x){
    if (head!=NULL)
    {
        if (head->data.get_MaHD() == x.get_MaHD()){
            head = head->next;
            head->prev = NULL;
        } 
        else
        if (last->data == x){
            last = last->prev;
            last->next = NULL;
        }
        else {
            struct node *temp = head;
            while (temp!=NULL) {
                if (temp->data==x) {
                    node *t1 = temp->prev;
                    node *t2 = temp->next;
                    t1->next = t2;
                    t2->prev = t1;
                    delete temp;
                    break;
                }
                temp = temp->next;  
            }
        }
        
    }
}