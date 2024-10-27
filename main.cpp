#include <iostream>
#include "CVMaker.h"
#include <array>
using namespace std;
using namespace cvmaker;

int main() {
    int longueur, largeur;
    cout << "Entrez la longueur: " << endl;
    cin >> longueur;
    cout << "Entrez la largeur: " << endl;
    cin >> largeur;

    for (int i = 0; i < longueur; i++) {
        for (int j = 0; j < largeur && j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}