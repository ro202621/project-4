template<class T> class dlist;

template<class T>
class node_iterator{
    public:
        friend class dlist<T>;

        node_iterator(node<T>* c = nullptr) {current = c;}

        T operator *()const {return current -> data();}

        node_iterator operator ++()const; // prefix
        node_iterator operator ++(int)const; // postfix

        node_iterator operator --()const; // prefix
        node_iterator operator --(int)const; // postfix


        bool operator ==(const node_iterator<T>& other)const {return current == other.current;}
        bool operator !=(const node_iterator<T>& other)const {return current != other.current;}
        
    private:
        node<T>* current;
};

#include "node_iterator.template"