# include <iostream>

int main ()
{
    int i =12;
    { 
        int* pi= new int{i};   // pi est l'adresse de i
        *pi=17;
    }
    return 0;
}

// On observe ici un phénomène de memory leak. De l'espace de RAM a été perdu car
// la mémoire récupéré avec new n'a pas été libéré.

# include <iostream>

int main ()
{
    int i =12;
    { 
        int* pi= new int{i};   // pi est l'adresse de i
        *pi=17;
        delete pi;
    }
    return 0;
}