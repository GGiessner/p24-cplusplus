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

};

inline IntStack:: IntStack &operator=(const IntStack &r) 
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

inline IntStack:: void push(int e)
    {
        tab[top] = e;
        top = top + 1;
    }
inline IntStack:: int get_top() const
    {
        return tab[top - 1];
    }
inline IntStack:: int pop()
    {
        int a = tab[top - 1];
        tab[top - 1] = 0;
        top = top - 1;
        return a;
    }
inline IntStack:: bool is_empty() const
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
inline IntStack:: bool is_full() const
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
inline IntStack:: void print() const
    {
        std::string ch = "[ ";
        for (int i = 0; i < top; i++)
        {
            ch += std::to_string(tab[i]) + " ";
        }
        ch += "]";
        std::cout << ch << std::endl;
    }

inline IntStack::~IntStack() {     // inline permet d'obtenir ce que l'on a par défaut en insérant la définition dans le block intstack
    delete []tab;
}

std::ostream &operator<<(std::ostream &os, const IntStack &pile)
{
    pile.print();
    return os;
}