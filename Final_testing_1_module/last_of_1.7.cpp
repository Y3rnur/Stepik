#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, invers;
    cin >> a >> b >> c >> d;
    bool f = (a > b);
    invers += f;
    f = (a > c);
    invers += f;
    f = (a > d);
    invers += f;
    f = (b > c);
    invers += f;
    f = (b > d);
    invers += f;
    f = (c > d);
    invers += f;
    cout << invers;
}