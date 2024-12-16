#include <iostream>

void swap(float& x, float& y) {   // Passer les variables par référence
    float t = x;   // Utiliser une variable temporaire pour stocker la valeur de x
    x = y;         // Assigner la valeur de y à x
    y = t;         // Assigner la valeur temporaire de t à y
}

int main() {
    float a = 84.0;   // Déclare la variable a et initialise à 84.0
    float b = -72.0;  // Déclare la variable b et initialise à -72.0

    swap(a, b);  // Appel de la fonction swap pour échanger a et b

    // Afficher les valeurs après l'échange
    std::cout << a << " et " << b << std::endl;

    return 0;