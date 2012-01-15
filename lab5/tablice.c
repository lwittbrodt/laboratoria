#include <stdio.h>
int main(){
 	
	int n,i,t=0;
	float suma=0;
	

printf("Jakiej dlugosci ma byc tablica: ");
scanf("%i", &n);

float tab1[n];
float tab2[n];

	for(i=0;i<n;i++){
		printf("podaj liczbe do tab1.%i: ",i);
		scanf("%f", &tab1[i]);
		printf("podaj liczbe do tab2.%i: ",i);
		scanf("%f", &tab2[i]);
	}
	i=0;			
while(t!=0){
	if(tab1[i]>tab2[i]) t=1;
	else t=2;	
i++;
}
printf("\nTablica nr %i poprzedza leksykograficznie druga tablice", t);

}
