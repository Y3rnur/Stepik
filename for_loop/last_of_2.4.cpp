#include<iostream>
using namespace std;

int main(){
    long long a, b, sum = 1, power = -1;
    cin >> a >> b;
    for(int i = 0; i < b; i++){
            sum += a * power;
            power = power * -a;
    }
    cout << sum << endl;
    return 0;
}