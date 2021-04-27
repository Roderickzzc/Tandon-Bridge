

#include <iostream>
using namespace std;
void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main()
{
    printTriangle(4);
    printOpositeTriangles(4);
    printRuler(4);
    return 0;
}

void printTriangle(int n) {
    int i;
    if (n == 1) {
        cout << "*" << endl;
    }
    else {
        printTriangle(n - 1);
        for (i = 1; i <= n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printOpositeTriangles(int n) {
    int i;
    if (n == 0) {
        return;
    }
    else {
        for (i = 1; i <= n; i++) {
            cout << "*";
        }
        cout << endl;
        printOpositeTriangles(n - 1);
        for (i = 1; i <= n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printRuler(int n) {
    int i;
    if (n == 1) {
        cout << "-";
        cout << endl;
    }
    else{
        printRuler(n - 1);
        
        for (i = 1; i <= n; i++) {
            cout << "-";
        }
        cout << endl;

        printRuler(n - 1);
    }
}