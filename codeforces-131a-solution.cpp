#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 5000

char str[sz + 5];

int main(){

    int i, j, k;
    int len;

    while(gets(str)){

        len = strlen(str);
        j = 0;

        if(str[0] >= 'A' && str[0] <= 'Z')
        for(i = 0; str[i]; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                j++;
            }
        }
        if(j == len){
            for(i = 0; str[i]; i++){
                str[i] = str[i] + 32;
            }
            puts(str);
            continue;
        }
        j = 0;

        if(str[0] >= 'a' && str[0] <= 'z'){
            for(i = 1; str[i]; i++){
                if(str[i] >= 'A' && str[i] <= 'Z'){
                    j++;
                }
            }
        }

        if(j == len - 1){
            str[0] = str[0] - 32;
            for(i = 1; str[i]; i++){
                str[i] = str[i] + 32;
            }
            puts(str);
            continue;
        }

        puts(str);
    }

    return 0;

}
