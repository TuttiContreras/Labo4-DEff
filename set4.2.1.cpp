
#include <iostream>
using namespace std;

template <typename T>

T minimo( const T t1 , const T t2) {
    return t1 < t2 ? t1 : t2;
}
int main(){
    cout << minimo<double>(3.5, 2.5) << endl;
    return 0;
}
