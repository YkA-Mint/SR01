#include<stdio.h>
int main ()
{
    int p [4]={1 , -2 ,3 ,4};
    int * q=p;
    int d=* q&* q ++|* q ++;
    /*
    Les expressions ¨¦quivalent ¨¤ (*q)&(*(q++))|(*(q++))
    Le '&' a une priorit¨¦ sup¨¦rieure au '|' et les deux sont associatifs ¨¤ gauche.
          valeur      le code source      le compl¨¦ment ¨¤ un      le compl¨¦ment ¨¤ deux
    *q    (1)           00000001             01111110                00000001
    *q++  (1)           00000001             01111110                00000001
    *q++  (-2)          10000010             11111101                11111110
    Les op¨¦rations sont effectu¨¦es en utilisant le compl¨¦ment ¨¤ deux dans l'ordinateur.

    (*q)&(*(q++))-->(1)&(1)-->(00000001)&(00000001)-->(00000001)-->1
    (*q)&(*(q++))|(*(q++))-->(1|(*(q++)))-->(1|-2)-->(00000001)|(11111110)
                          -->(11111111)(le compl¨¦ment ¨¤ deux)
                          -->(10000001)(le code source )-->-1
    */
    printf (" d=%d\n", d);//donc la valeur de 'd' est '-1'
    /*
        la valeur de retour     la valeur de *q
    *q          p[0]                p[0]
    *q++        p[0]                p[1]
    *q++        p[1]                p[2]
    */
    printf (" q=%d\n" ,* q);//Donc la valeur de *q est p[2],c-t-d 3

}
