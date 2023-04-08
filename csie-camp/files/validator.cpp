#include "testlib.h"
#define MAXN 1000

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n=inf.readInt(1, MAXN, "n");
    inf.readSpace();
    int m=inf.readInt(1, MAXN, "m");
    inf.readEoln();

    for(int i=0;i<n;i++){
        int num=inf.readInt(0, MAXN, "num");
        inf.readSpace();
        for(int j=0;j<num;j++){
            inf.readInt(1, MAXN, "act");
            inf.readSpace();
        }
        inf.readEoln();
    }
    for(int i=0;i<m;i++){
        inf.readInt(0, MAXN, "max");
        inf.readSpace();
    }
    inf.readEoln();
    inf.readEof();
}
