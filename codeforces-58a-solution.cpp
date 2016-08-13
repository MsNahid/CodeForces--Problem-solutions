#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 102

char str[sz + 5];

char A[10]="hello",a;
int i;
int main(){

    while(scanf("%c", &a) && a != '\n'){
        if(a == A[i]) i++;
    }

    if(i == 5) puts("YES");
    else puts("NO");

    return 0;
}
