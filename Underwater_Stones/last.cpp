#include <iostream>

using namespace std;

int main() {
	//Пишите ваше решение здесь
    long long a, b, c, d, e;
    cin >> e;
    e = e * -1;
    a = e / 1000;
    b = e / 100 % 10;
    c = e / 10 % 10;
    d = e % 10;
    cout << "-"<< a << c << b << d << endl;
    return 0;
}