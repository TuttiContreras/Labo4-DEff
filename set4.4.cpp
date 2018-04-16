#include <iostream>
#include <math.h>
using namespace std;

template <class T> class Stack;

template <class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;

    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}

template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
    Vector <T> items ;
public :
    bool empty () const { return items.empty () ;}
    void push ( const T & item ) { items.push_back ( item );}
    T pop () {
        T last = items.back();
        items.pop_back();
        return last ;
    }
};

template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }

    return result ;
}

int main(){
    Stack<int> c(5);
    Stack<double> cc(5.2);
    cout << c.push() <<endl;
}
