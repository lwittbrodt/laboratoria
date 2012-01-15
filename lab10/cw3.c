#include <stdio.h>
#define ile 100
int n1,n2,n,i1,i2,i;

float ciag1[ile],ciag2[ile],ciag[ile*2];
void scal(){

if(i1<n1 && i2<n2){
        if (ciag1[i1]<ciag2[i2]){
                ciag[i]=ciag1[i1];
                i1=i1+1;
            }

        else {
                ciag[i]=ciag2[i2];
                i2=i2+1;
            }
        i=i+1;
        scal();
        }
    else if(i1<n1){
        ciag[i]=ciag1[i1];
        i1=i1+1;
        i=i+1;
        scal();
    }
    else if(i2<n2){
        ciag[i]=ciag2[i2];
        i2=i2+1;
        i=i+1;
        scal();
    }
}

main()
{
printf(" Podaj dlugosc pierwszego ciagu niemalejacego : ");
scanf("%i",&n1);
printf(" Podaj wyrazy pierwszego ciagu : " );
for(i1=0;i1<n1;i1=i1+1){
    scanf("%f",&ciag1[i1]);
}

printf(" Podaj dlugosc drugiego ciagu niemalejacego : ");
scanf("%i",&n2);
printf(" Podaj wyrazy drugiego ciagu : ");
for(i2=0;i2<n2;i2=i2+1){
    scanf("%f",&ciag2[i2]);
}

n=n1+n2;
i1=0;
i2=0;
i=0;

scal();
printf("Ciag scalony : \n");
for(i=0;i<n;i=i+1){
    printf("%f ",ciag[i]);
}

}

