#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int dp[501][501];

void init_lattice_path(void)
{
    for(int c = 1; c < 501; c++) {
        for(int l = 1; l < 501; l++) {
            if(c == 1 || l == 1) {
                dp[c][l] = c + l;
            } else {
                int temp1 = dp[c-1][l];
                int temp2 = dp[c][l-1];
                long long result = (long long)temp1 + (long long)temp2;
                if( result > (1000000000 + 7)) {
                    result %= (1000000000 + 7);
                }
                dp[c][l] = (int)result;
            }
        }
    }
}

uint64_t get_lattice_path(void)
{
    uint64_t ret;
    int n, m;
    scanf("%d %d", &n, &m);
    return dp[n][m];
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    init_lattice_path();

    int N;
    scanf("%d", &N);
    for(int i=0 ; i < N; i++) {
        printf("%lu\n", get_lattice_path());
    }

    return 0;
}