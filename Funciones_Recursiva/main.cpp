#include <iostream>
using namespace std;

int for_f(int n){
    static int i=0;
    if (i >= n) {
        return 0;
    } else {
        i=i+1;
        cout << i-1 << endl;
        return for_f(n);
    }
}

int for_a( int n, int m, int i = 0, int j=-4){
    if ( i>=0 || j < m){
return 0;
else {
cout << i << "" << j << endl;

return for_a(n, m, i+2, j-4);
}
}

int main() {
    int resultado = for_a(4, 6)
    return 0;
}
