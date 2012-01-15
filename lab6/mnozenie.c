#include<stdio.h>
main()
{
int dl3,t2,i,j,k,dl1,dl2,dlugosc,tab[100],tab2[100],tab3[100],czcalk;

for (i=0; i<=100; i=i+1)
{
    tab[i]=0;
    tab2[i]=0;
    tab3[i]=0;
}


printf("Podaj dlugosc pierwszej liczby\n");
scanf("%i", &dl1);

printf("Podawaj cyfry pierwszej liczby zaczynaj±c od liczby jedn\n");

for (i=0; i<=dl1-1; i=i+1)
{
    scanf("%i", &tab[i]);
}

printf("Podaj dlugosc drugiej liczby\n");
scanf("%i", &dl2);

printf("Podawaj cyfry drugiej liczby zaczynaj od liczby jedno\n");
for (i=0; i<=dl2-1; i=i+1)
{
    scanf("%i", &tab2[i]);
}


if (dl1>dl2)
{
    dlugosc=dl1;
}
else
{
    dlugosc=dl2;
}


for (i=0; i<=dl2-1; i=i+1)
{
    for (j=0; j<=dl1-1; j=j+1)  
    {
tab3[j+i]=tab3[j+i]+(tab[j]*tab2[i]);
    }
    
}


dl3=0;
t2=0;
i=99;
while (i>0 && t2==0)
{
        if (tab3[i]>0) t2=1;
        i=i-1;
}
dl3=i+1;




czcalk=0;
for (k=0; k<=i+j; k=k+1) 
{
tab3[k]=tab3[k]+czcalk;
    czcalk=0;
    if (tab3[k]>=10)
    {
        czcalk=(tab3[k]-(tab3[k]%10)/10);
        tab3[k]=tab3[k]%10;
        
    }

    if (k==dl2 && czcalk>0)
        {
                dl2=dl2+1;
        }
}

int t=0;
printf ("\nWynik to : ");
for (k=dl3; k>=0; k=k-1)
{
printf("%i", tab3[k]);

if (k==0)
printf("\n");
}
}
