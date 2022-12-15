#include "lib.h"
int funzione(char a [][20], char b [1][20]) {
    for (int i=0; i<20; i++) {
        if ( a [i][0] == b[0][0]) {
            for (int j =0 ; j <20 ; j++) {
                if (a [i][j]!= b[0][j]) {
                    break;
                }
                if (j==19) {
                    return i;
                }
            }
        }
    } return  -1;
}
