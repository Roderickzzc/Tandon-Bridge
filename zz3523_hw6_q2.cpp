
#include <iostream>
using namespace std;
void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main()
{
    int numOfTrees;
    char symbol;
    cout << "Please enter the number of triangles in the tree and the character filling the tree with a space." << endl;
    cin >> numOfTrees >> symbol;
    cout << "The tree looks like: " << endl;
    printPineTree(numOfTrees, symbol);
    return 0;
}

void printShiftedTriangle(int n, int m, char symbol) {
    int i,j,k,p,q;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << " ";
        }
        for (p = 1; p <=n-i ; p++) {
            cout << " ";
        }

        for (k = 1; k <= 2 * i - 1; k++) {
            cout << symbol;
        }
        
        cout << endl;
    }
}

void printPineTree(int n, char symbol) {
    int i;
    for (i = 1; i <= n; i++) {
        printShiftedTriangle(i+1, n-i, symbol);
    }
}