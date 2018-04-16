#include <iostream>
using namespace std;

#define min(x, y) (x < y ? x : y)
int main(){
    cout << min<double>(1.5, 2.5) << endl;
    return 0;
}
