#include<stdio.h>
int main ()
{
    int p [4]={1 , -2 ,3 ,4};
    int * q=p;
    printf (" c=% d\n", *++q**q++) ;
    /*
    l'associativit¨¦ ¨¤ droite et de la m¨ºme priorit¨¦ de '*' (comme op¨¦rateur d'indirection) et '++'
    Les expressions ¨¦quivalent ¨¤ ((*(++q))*(*(q++)))
    Le '*' au milieu est un op¨¦rateur binaire de multiplication avec une association ¨¤ gauche
    (Calcul de gauche ¨¤ droite
     -->(p[1])*(*(q++))
     -->(p[1])*(p[1]) --> (-2)*(-2)--> 4
     //q++:Affecter la valeur de q( l'address de p[1])
     //et effectuer une op¨¦ration d'incr¨¦mentation
    Donc, la valeur de 'q' est maintenant l'address de p[2]
    */
    printf (" c=% d\n" ,* q);//la valeur de p[2] est 3
}
