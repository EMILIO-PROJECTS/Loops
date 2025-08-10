#include <iostream>
#include <math.h>

using namespace std;


int main() {

    system("cls");

    for (int i = 10; i < 100; i ++) {    // 10, 11, 12, ... 99
        int first = i / 10;
        int second = i % 10;

        if ((first + second) % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;


    



}