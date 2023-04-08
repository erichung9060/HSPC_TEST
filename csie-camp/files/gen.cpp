#include "testlib.h"
#include <iostream>
#include <vector>
 
using namespace std;


int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int N = opt<int>("n");
    int M = opt<int>("m");

    int n=rnd.next(1,N);
    int m=rnd.next(1,M);

    cout << n << ' ' << m << endl;
 
    for(int i=0;i<n;i++){
        int num=rnd.next(0,m);
        cout << num;
        vector<int> idx(m);
        for(int j=0;j<m;j++) idx[j]=j+1;
        shuffle(idx.begin(),idx.end());
        for(int j=0;j<num;j++) cout << ' ' << idx[j];
        cout << endl;
    }

    for(int i=0;i<m;i++){
        if(i) cout << ' ';
        cout << rnd.next(0,n);
    }
    cout << endl;
}
