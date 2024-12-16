#include <iostream>
#include <stdexcept>

// constante entière pour la taille de la pile
const int SIZE{12};

// on définit un type de donnée (une classe) pour gérer une pile d'entier de taille 12 (SIZE)
class IntStack
{
public:
    int tab[SIZE];
    int top=0;
    int size=SIZE;

    void push(int e)
    {
        // cette fonction ajoute l'entier e dans la pile
        tab[top]=e;
        top= top+1;
    }
    int get_top()
    {
        // cette fonction retourne le dernier entier empilé
        return tab[top-1];
    }
    int pop()
    {
        // cette fonction retourne le dernier entier empilé
        // et supprime cet entier de la pile
        int a=tab[top-1];
        tab[top-1]=0;
        return a;
    }
    bool is_empty()
    {
        // cette fonction teste si la pile est vide
        if (top==0){
            return true;
        }
        else {
            return false;
        }
    }
    bool is_full()
    {
        // cette fonction teste si la pile est pleine
        if (top==SIZE){
            return true;
        }
        else {
            return false;
        }
    }
    void print()
    {
        // cette fonction affiche la pile, par exemple
        // [1 2 3 [ pour dire que 3 entiers sont dans la pile
        // le dernier empilé est 3
        std::string ch= "[ " ;
        for (int i=0; i< top;i++){
            ch= ch + "tab[i] ";
        }
        ch= ch +"[";
    }

private:
    // vos attributs pour représenter la pile d'entier
    // dans cette version toutes les piles sont de taille SIZE
    // Déjà fait tout en haut
};

// 1. réaliser le code pour faire fonctionner cette pile d'entier de taille fixée à la compilation
// 2. quelles sont les méthodes qui ne modifient pas l'objet sur lequel elles sont appelées
//    faites en sorte qu'elles puissent être appelées sur un objet constant: push, print
// 3. faites la fonction qui permet d'afficher un objet de type IntStack directement avec <<<
//    std::cout << s1;
//    il faut redéfinir l'operator<< en appelant la méthode print

// Je n'ai pas compris ce qui est demandé. Cela correspond-il au programme main

int main()
{
    IntStack s1;
    s1.print(); // affichera [[
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.print();                         // affichera [1 2 3 ]
    std::cout << s1.pop() << std::endl; // affichera 3
    s1.print();                         // affichera [1 2 ]
    return 0;
}
