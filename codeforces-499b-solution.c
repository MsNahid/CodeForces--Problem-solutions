#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 3009

char str[sz + 1][3][15];
char str2[sz + 1][15];

int main(){

    int i, j, k, len;


    scanf("%d%d", &n, &m);
    getchar();

    for(i = 0; i < m; i++){
        for(j = 0; j < 2; j++){
            gets(str[i][j]);
        }
    }

}
