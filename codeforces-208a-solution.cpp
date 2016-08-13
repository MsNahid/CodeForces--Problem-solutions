#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 202

char str[sz + 5];

int main(){

    int i, len;
    while(gets(str)){

        len = strlen(str);

        for(i = 0; str[i]; i++){
            if(str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B'){
                if(i != 0 && i != len) printf(" ");
                i += 2;
            }else{
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
