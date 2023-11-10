#include "dnode.h"

using namespace std;

#ifndef DLIST_H
#define DLIST_H

template<class T>
class dlist{
    public:
        dlist() {head = tail = nullptr;}

        // THE BIG 3
        ~dlist();
        dlist(const dlist<T>& other);
        dlist<T>& operator =(const dlist<T>& other);

        // other functions
        void front_insert(const T& item);
        void rear_insert(const T& item);
        void front_remove();
        void rear_remove();

        void show();

        // iterator functions
        node_iterator begin()const {return node_iterator<T>(head);}
        node_iterator end()const {return node_iterator<T>(tail);}
        node_iterator r_begin()const {return node_iterator<T>(tail);}
        node_iteator r_end()const {return node_iterator<T>(head);}

        void insert_before(node_iterator<T>& it, const T& item);
        void insert_after(node_iterator<T>& it, const T& item);

        void remove(node_iterator<T>& it);

    private:
        node<T>* head;
        node<T>* tail;
};

#include "dlist.template"

#endif