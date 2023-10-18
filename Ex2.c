#include <stdio.h>
#include <stdlib.h>
#define N 20
#define MAXN 6

void Affecter_notes(float point[])
{
    int i;
    printf("Lire la note d'¨¦tudiant\n");
    for(i=0;i<N;i++)
    {
        scanf("%f",&point[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("la note d'¨¦tudiant %d est %f\n",i+1,point[i]);
    }
}

void Afficher(float point[])
{
    int i;
    float max = point[0];
    float min = point[0];
    float moyenne = 0;
    int somme = 0;

    for(i=0;i<N;i++)
    {
        somme += point[i];
        if (max< point[i])
        {
            max = point[i];
        }
        if(min > point[i])
        {
            min = point[i];
        }
    }
    moyenne = (float)somme/N;
    printf("La moyenne des notes du devoir SR01 est %f\n",moyenne);
    printf("La note maximale du devoir SR01 est %f\n",max);
    printf("La note minimale du devoir SR01 est %f\n",min);
}


void Compter_Nombre_Note(float point[],int note[])
{
    int i;
    for(i=0;i<N;i++)
    {
        if ((point[i]>=0)&&(point[i]<=9))   note[0]++;
        else if ((point[i]>=10)&&(point[i]<=19))  note[1]++;
        else if ((point[i]>=20)&&(point[i]<=29))  note[2]++;
        else if ((point[i]>=30)&&(point[i]<=39))  note[3]++;
        else if ((point[i]>=40)&&(point[i]<=49))  note[4]++;
        else if ((point[i]>=50)&&(point[i]<=59))  note[5]++;
        else if ( point[i]==60) note[6]++;
        else printf("ERROR");
    }
}

void Graphique_En_Nuage_De_Points(int note[])
{
    int i;
    int j;
    for(j=MAXN;j>0;j--)//ligne
    {
        printf("%d >    ",j);
        for(i=0;i<7;i++)//ligne conforme aux crit¨¨res
        {
            if(note[i]==j)//v¨¦rifier si cela est conforme aux crit¨¨res
            {
                printf(" o      ");
            }
            else
            {
                printf("        ");
            }
        }
        printf("\n\n\n");
    }
    printf("       ");
    for(i=0;i<7;i++)
    {
        if(note[i]==0)
        {
            printf("+---o---");
        }
        else
        {
            printf("+-------");
        }
    }
    printf("+");
    printf("\n");
    printf("       | 0 - 9 | 10-19 | 20-29 | 30-39 | 40-49 | 50-59 |  6 0  |\n");

}

void Graphique_En_Batons(int note[])
{
    int i;
    int j;
    int note_copy[7];
    for(i=0;i<7;i++)
    {
        note_copy[i] = note[i];
    }
    for(j=MAXN;j>0;j--)//ligne
    {
        printf("%d >    ",j);
        for(i=0;i<7;i++)//ligne conforme aux crit¨¨res
        {
            if(note_copy[i]==j)//v¨¦rifier si cela est conforme aux crit¨¨res
            {
                printf("  ##### ");
                note_copy[i]--;
            }
            else
            {
                printf("        ");
            }
        }
        printf("\n\n\n");
    }
    printf("       +-------+-------+-------+-------+-------+-------+-------+");
    printf("\n");
    printf("       | 0 - 9 | 10-19 | 20-29 | 30-39 | 40-49 | 50-59 |  6 0  |\n");

}

int main()
{
    float POINT[N];
    int NOTE[7]={0,0,0,0,0,0,0};
    Affecter_notes(POINT);
    printf("\n\n");
    Afficher(POINT);
    printf("\n\n");
    Compter_Nombre_Note(POINT,NOTE);
    printf("\n\n");
    Graphique_En_Nuage_De_Points(NOTE);
    printf("\n\n");
    Graphique_En_Batons(NOTE);


    return 0;
}
