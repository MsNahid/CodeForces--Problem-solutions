#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main() {

    int n, t, i;

    while(scanf("%d%d", &n, &t) == 2){

        if(n == 1 && t == 10){
            puts("-1");
            continue;
        }

        if(t != 10){
            for(i = 1; i <= n; i++)
                printf("%d", t);
            printf("\n");
        }else{
            printf("1");
            for(i = 1; i < n; i++){
               printf("0");
            }
           printf("\n");
        }
    }

    return 0;
}
