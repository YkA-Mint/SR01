#include<stdio.h>
int main()
{
    int A=20 ,  B=1 ,  C= 0 ,  D =2;
    printf ("% d \n", A&& B ||! 0&&C ++&& !D ++) ;
    /*
    Parce que le r¨¦sultat de 'A && B' est TRUE
    Pour '||', si l'un est TRUE, le r¨¦sultat est TRUE.
    Donc les expressions restantes¡®! 0&&C ++&& !D ++¡¯ ne seront pas calcul¨¦
    Donc, la resultat est 1£¨Dans l'ordinateur, 'TRUE' est consid¨¦r¨¦ comme '1'£©
    */
    //Donc, la resultat est 1
    printf (" c=%d,d=%d\n",C, D);
    /*
    ¡®C++¡¯et¡®D++¡¯ne seront pas calcul¨¦
    Par cons¨¦quent, les valeurs de C et D ne changent pas.
    */
}
