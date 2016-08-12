#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 102

char str[sz + 2], str2[sz + 2];

int main(){

    int i, j, k;

    while(gets(str)){

        gets(str2);

        for(i = 0; str[i]; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;
            }
            if(str2[i] >= 'A' && str2[i] <= 'Z') str2[i] = str2[i] + 32;
        }

        if(strcmp(str, str2) > 0) puts("1");
        else if(strcmp(str, str2) < 0) puts("-1");
        else puts("0");
    }

    return 0;
}
