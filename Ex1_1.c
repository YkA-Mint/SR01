#include<stdio.h>

int main()
{
    int A=20,B =5;
    int C=!-- A /++!B;
     /*
    Cette partie du code génère une erreur de compilation en raison de problèmes liés aux valeurs de gauche (lvalue) et de droite (rvalue).
    !B est un rvalue(l'address n'existe pas), mais '++' doit combiner avec un variable (lvalue)
    (!(--A))/(++(!B)) cette expression est ma conjecture , donc A=19 B=? ,C=0
    Je pense que '!' ne peux pas changer la valeur de B et '++', theoriquement, incrementer '!B',pas'B'
    Peut-etre B = 5(ne changer pas)

    J'aimerais savoir ce que tu en penses. :-）


    */

    printf (" A=% d B=% d c=% d \ n", A,B, C);
    return 0;
}
