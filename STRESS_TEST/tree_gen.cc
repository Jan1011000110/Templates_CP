#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1]));
    int n = rand(2, 20);
    cout << n << endl;
    for(int i = 2; i <= n; ++i) {
        cout << rand(1, i-1) << " " << i << endl;
    }
}
