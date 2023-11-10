#include <iostream>

using namespace std;

#ifndef DOUBLY_LINKED_NODE_H
#define DOUBLY_LINKED_NODE_H

template<class T>
class node{
public:
    node(T d = T(), node<T>* n = nullptr, node<T>* p = nullptr);

    T data()const {return data_field;}
    node<T>* next()const {return next_field;}
    node<T>* prev()const {return prev_field;}

    void set_data(T d) {data = d;}
    void set_next(node* n) {next_field = n;}
    void set_prev(node* p) {prev_field = p;}
    
private:
    T data_field;
    node<T>* next_field;
    node<T>* prev_field;
};

#endif