#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        if(b >= c){
            cout << c << " " << b << " " << a << endl;
            return 0;
        }
        else{
            cout << b << " " << c << " " << a << endl;
            return 0;
        }
    }
    if(b >= a && b >= c){
        if(a >= c){
            cout << c << " " << a << " " << b << endl;
            return 0;
        }
        else{
            cout << a << " " << c << " " << b << endl;
            return 0;
        }
    }
    if(c >= a && c >= b){
        if(b >= a){
            cout << a << " " << b << " " << c << endl;
            return 0;
        }
        else{
            cout << b << " " << a << " " << c << endl;
            return 0;
        }
    }
}