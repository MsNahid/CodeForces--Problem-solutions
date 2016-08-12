#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

    int n, m, bx, by, i, val;
    double  sum, sum2;

    while(scanf("%d%d", &n, &bx) == 2){

        sum = sum2 = 0.0;

        for(i = 1; i <= n; i++){
            scanf("%d", &val);
            sum += (val * 1.0 * pow(bx * 1.0, ((n - i) * 1.0)));
        }

        scanf("%d%d", &m, &by);

        for(i = 1; i <= m; i++){
            scanf("%d", &val);
            sum2 += (val * 1.0 * pow(by * 1.0, ((m - i) * 1.0)));
        }

        printf("%lf %lf\n", sum, sum2);

        if(sum < sum2) puts("<");
        else if(sum > sum2) puts(">");
        else puts("=");

    }

    return 0;

}
