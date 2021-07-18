#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e, f, sum;
    cin >> a;
    if(a / 1000 != 0){
        b = a / 1000;
        c = a / 100 % 10;
        d = a / 10 % 10;
        e = a % 10;
        f = 0;
        sum = b + c + d + e;
        while(true){
            e++;
            if(e == 10){
                d++;
                e = 0;
            }
            if(d == 10){
                c++;
                d = 0;
            }
            if(c == 10){
                b++;
                c = 0;
            }
            if(b == 10){
                f++;
                b = 0;
            }
            if(b + c + d + e + f == 13 && f == 0){
                cout << b << c << d << e;
                return 0;
            }
            if(b + c + d + e + f == 13 && f != 0){
                cout << f << b << c << d << e;
                return 0;
            }
        }
    }
    if(a / 100 != 0){
        b = a / 100;
        c = a / 10 % 10;
        d = a % 10;
        e = 0;
        while(true){
            d++;
            if(d == 10){
                c++;
                d = 0;
            }
            if(c == 10){
                b++;
                c = 0;
            }
            if(b == 10){
                e = 1;
                b = 0;
            }
            if(b + c + d + e == 13 && e != 0){
                cout << e << b << c << d;
                return 0;
            }
            if(b + c + d + e == 13 && e == 0){
                cout << b << c << d;
                return 0;   
            }
        }
    }
    if(a / 10 != 0){
        b = a / 10;
        c = a % 10;
        d = 0;
        while(true){
            c++;
            if(c == 10){
                b++;
                c = 0;
            }
            if(b == 10){
                d = 1;
                b = 0;
            }
            if(c + b + d == 13 && d == 0){
                cout << b << c;
                return 0;
            }
            if(c + b + d == 13 && d != 0){
                cout << d << b << c;
                return 0;
            }
        }
    }
    if(a / 10 == 0){
        cout << "49" << endl;   
    }
}