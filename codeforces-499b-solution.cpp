#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 3009

char str[sz + 1][3][15];
char str2[sz + 1][15];

int main(){

    int i, j, k;
    int n, m, len, len2;


    scanf("%d%d", &n, &m);
    getchar();

    for(i = 0; i < m; i++){
        for(j = 0; j < 2; j++){
            scanf("%s", str[i][j]);
        }
    }
    for(i = 0; i < n; i++){
       scanf("%s", str2[i]);
    }

    for(k = 0; k < n; k++){
        for(i = 0; i < m; i++){
            for(j = 0; j < 2; j++){
                if(!strcmp(str2[k], str[i][j])){
                    len = strlen(str[i][0]);
                    len2 = strlen(str[i][1]);

                    (len > len2)? printf("%s ", str[i][1]): printf("%s ", str[i][0]);
                }
            }
        }
    }

    printf("\n");

    return 0;
}
