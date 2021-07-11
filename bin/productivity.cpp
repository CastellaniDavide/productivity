#include <bits/stdc++.h>
using namespace std;

#define DEBUG

int N, M, E, sol;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> N >> M >> E;
    sol = 0;

    for (size_t i = M; i <= N; ++i)
        if (E % i > sol)
            sol = E % i;

    cout << sol << endl;
}
