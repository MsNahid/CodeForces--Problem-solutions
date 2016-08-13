#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 5000
char str[sz + 5];

int main(){

    int i, j, tc;
    int len;

    scanf("%d", &tc);
    getchar();

    while(tc--){

        gets(str);
        len = strlen(str);

        if(len > 10){

            putchar(str[0]);
            printf("%d", len - 2);
            putchar(str[len - 1]);
            putchar('\n');

        }else if(len <= 10){
            puts(str);
        }

    }

    return 0;
}
