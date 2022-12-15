#include <iostream>
using namespace std;
#include "lib.h"
int main() {
    char array1 [10][20];
    for (int i=0; i<10; i++) {
        for(int j=0; j<20; j++) {
            array1 [i][j]=' ';
        }
        cin>>array1[i];
    }
    char array2 [1] [20];
        for(int j=0; j<20; j++) {
            array2 [0][j]=' ';
        }
        cin>>array2[0];
        if (funzione(array1, array2)==-1) {
            cout<<"non presente"<<endl;
        } else {
            cout<<funzione(array1, array2) <<endl;
        }
    return 0;
}
