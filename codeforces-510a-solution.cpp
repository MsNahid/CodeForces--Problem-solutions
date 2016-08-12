#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

    int n, m;
    int i, j, proxy;

    while(scanf("%d%d", &n, &m) == 2){

        proxy = 1;
        for(i = 1; i <= n; i++){
            if(i % 2 != 0){
                for(j = 1; j <= m; j++){
                    printf("#");
                }
                proxy++;
                printf("\n");
            }else{

                if(proxy % 2 != 0) printf("#");
                for(j = 1; j < m; j++){
                    printf(".");
                }

                if(proxy % 2 == 0) printf("#");

                printf("\n");
            }
        }
    }

    return 0;
}
