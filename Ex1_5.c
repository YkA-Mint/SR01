#include<stdio.h>
int main ()
{
    int a=-8 , b =3;
    int c= ++a&&-- b ? b --: a ++;
    /*
   ¡®E1 ?E2 :E3 ¡¯est l'op¨¦rateur ternaire, si la resultat de E1 est TRUE, il va affecter E2 ¨¤ la variable. Sinon, il ¨¦gale E3
    E1: ++a&&--b -->(-7)&&(2)--->TRUE
    Donc on choisit 'b--'(E2) et l'affecte ¨¤ 'c'. 'a++'(E3) n'est pas calcul¨¦
    c-t-d: c=b-- --> c=2
    Apr¨¨s l'affectation, on d¨¦cr¨¦mente b.
    Donc la valeur de 'b' est 1

    */
    printf (" a=%d b=%d c=%d\n",a,b, c);
// a=-7 b= 1 c= 2
}
