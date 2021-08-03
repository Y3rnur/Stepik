#include<iostream>
using namespace std;

int main(){
    int i = 0, a, bats = 0, boom = 0, batsoom = 0;
    cin >> a;
    while(i < a){
        i++;
        if(i % 3 == 0 && i % 5 == 0){
            batsoom++;
        }
         if(i % 3 != 0 && i % 5 == 0){
            boom++;
        }
         if(i % 3 == 0 && i % 5 != 0){
            bats++;
        }
    }
    cout << bats << " " << boom << " " << batsoom << endl;
}