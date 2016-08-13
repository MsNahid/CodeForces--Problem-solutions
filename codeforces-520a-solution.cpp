#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 104



int main(){

    int i, j, n, len;
    int cont[28] = {0};

    scanf("%d", &n);
    getchar();
    char str[n];


    scanf("%s", str);


    for(i = 0; str[i]; i++){
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
    }


    for(i = 0; str[i]; i++){
        cont[(str[i] - 48) - '0']++;
    }

    for(i = 1; i <= 26; i++){
        if(cont[i] == 0){
            break;
        }
    }

    if(i == 27) puts("YES");
    else puts("NO");

    return 0;
}
