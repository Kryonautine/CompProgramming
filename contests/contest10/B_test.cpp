#include <bits/stdc++.h>
using namespace std;

int main(){

    ofstream f;
    f.open("in.txt");

    long iter = 890;
    long initial = 1110;
    f << iter << endl;
    for (int i = 0; i < iter; i++) {
        
        f << initial +i << endl;
    }

    f.close();
}