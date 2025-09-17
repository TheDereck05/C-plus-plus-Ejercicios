#include <iostream>

using namespace std;
int cambiar_n( int , int);

void cambiar_n( int &a, int &b ){
        int tmp = a;
        a = b;
        b =tmp;
}
int main()
{
    int x= 10;
    int y= 20;
    cambiar_n(x,y);

    cout << x << endl;
    cout << y << endl;
}
    return 0;
}
