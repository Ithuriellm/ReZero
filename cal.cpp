#include <bits/stdc++.h>

using namespace std;

float a;

float f(float x){
    return x/2;
}

int main() {
    for (float i = 10000; i < 20000; i++){
        a = i - 10000;
        if (f(i) == a){
            cout << i << endl;
            break;
        }
    }
    return 0;
}