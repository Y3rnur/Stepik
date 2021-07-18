#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e, g;
    bool f;
    cin >> a >> b >> c >> d >> e;
    f = (a > 0);
    g += f;
    f = (b > 0);
    g += f;
    f = (c > 0);
    g += f;
    f = (d > 0);
    g += f;
    f = (e > 0);
    g += f;
    cout << g;
}