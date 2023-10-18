#include<stdio.h>
int main ()
{
    int a=-8 , b =3;
    a>>=2^b;
    /*
     Le '^'£¨op¨¦ration XOR£© a une priorit¨¦ sup¨¦rieure au '>>=' et a l¡¯associatifs ¨¤ gauche.
    '>>=' a l¡¯associatifs ¨¤ droite
    Donc l'expression ¨¦quivalent ¨¤ 'a>>=(2^b)'
        valeur      le code source      le compl¨¦ment ¨¤ un      le compl¨¦ment ¨¤ deux
    b    3           00000011             01111111                00000011
    2    2           00000010             01111101                00000010
    2^b  1           00000001             01111110                00000001
    a    -8          10001000             11110111                11111000

    a>>=(2^b)  -->  a=a>>1
    Comme a est n¨¦gatif, la transition vers la droite utilisera '1' pour combler les positions vides ¨¤ gauche.
    donc on d¨¦calage 11111000 d'un bit ¨¤ droite)
        --> 11111100£¨le compl¨¦ment ¨¤ deux£©
        --> 10000100(le code source)--> -4
    On peux observer que la translation d'un bit vers la droite ¨¦quivaut ¨¤ diviser l'entier par 2.
    */
    printf (" a=%d\n",a);
}
