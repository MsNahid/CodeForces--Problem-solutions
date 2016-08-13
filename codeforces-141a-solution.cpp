#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 102

char str[sz + 3], str2[sz + 3], str3[sz + 3];

int main(){

    int i, j, k;
    int cont[28] = {0}, cont2[28] = {0};

    scanf("%s %s %s", str, str2, str3);

    for(i = 0; str[i]; i++)
        cont[(str[i] - 16) - '0']++;

     for(i = 0; str2[i]; i++)
        cont[(str2[i] - 16) - '0']++;

     for(i = 0; str3[i]; i++)
        cont2[(str3[i] - 16) - '0']++;

    for(i = 1; i <= 26; i++){
        if(cont[i] != cont2[i]){
            break;
        }
    }

    if(i == 27) puts("YES");
    else puts("NO");

    return 0;

}

