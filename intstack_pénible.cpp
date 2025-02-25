#include <iostream>
#include <stdexcept>

class IntStack
{
private:
    int *tab;
    int top = 0;
    int size;

public:
    IntStack(int s) : top(0), size(s)
    {
        tab = new int[size];
    }

    IntStack() : top(0), size(12)  // Taille par défaut
    {
        tab = new int[size];
    }

    ~IntStack(); 
    // {
    //     delete[] tab;
    // }

    IntStack(const IntStack &r) : top(r.top), size(r.size)
    {
        tab = new int[size];
        for (int i = 0; i < top; ++i)
        {
            tab[i] = r.tab[i];  
        }
    }

    IntStack &operator=(const IntStack &r) 
    {
        if (this != &r) 
        {
            delete[] tab;  // Libération de l'ancienne mémoire
            size = r.size;
            top = r.top;
            tab = new int[size];  // Nouvelle allocation

            for (int i = 0; i < top; ++i)
            {
                tab[i] = r.tab[i];  // Copie des éléments
            }
        }
        return *this;
    }

    void push(int e)
    {
        tab[top] = e;
        top = top + 1;
    }
    int get_top() const
    {
        return tab[top - 1];
    }
    int pop()
    {
        int a = tab[top - 1];
        tab[top - 1] = 0;
        top = top - 1;
        return a;
    }
    bool is_empty() const
    {
        if (top == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool is_full() const
    {
        if (top == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print() const
    {
        std::string ch = "[ ";
        for (int i = 0; i < top; i++)
        {
            ch += std::to_string(tab[i]) + " ";
        }
        ch += "]";
        std::cout << ch << std::endl;
    }

};

inline IntStack::~IntStack() {     // inline permet d'obtenir ce que l'on a par défaut en insérant la définition dans le block intstack
    delete []tab;
}

std::ostream &operator<<(std::ostream &os, const IntStack &pile)
{
    pile.print();
    return os;
}

int main()
{
    IntStack s1;  // Utilise le constructeur par défaut
    s1.print();   // Affichera []
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.print();                         // Affichera [1 2 3 ]
    std::cout << s1.pop() << std::endl; // Affichera 3
    s1.print();                         // Affichera [1 2 ]

    IntStack s2 = s1;  // Utilisation du constructeur de copie
    s2.print();        // Affichera [1 2]

    IntStack s3(5);    // Création d'une pile de taille 5
    s3.push(7);
    s3.push(8);
    s3.print();        // Affichera [7 8]

    s3 = s1;           // Utilisation de l'opérateur d'affectation
    s3.print();        // Affichera [1 2]

    return 0;
}