#include <stdio.h>

main() {

	int ileLiczb;

	printf("Ile podasz liczb rzeczywistych: ");
	scanf("%i", &ileLiczb );
	printf("\n");

	float liczby[ileLiczb];

	int i;

	for(i=0;i<ileLiczb;i++){

		printf("Podaj liczbe number %i :" ,i+1);
		scanf("%f", &liczby[i]);
	}

	printf("\n");

	int ujemne=0;
	int dodatnie=0;
	int zerowe=0;

	for(i=0;i<ileLiczb;i++){

		if(liczby[i]>0) { dodatnie++; }
		else if(liczby[i]<0) { ujemne++; }
		else{ zerowe++; }
	}

	printf( "Mamy %i liczb dodatnich.\n", dodatnie );
	printf( "Mamy %i liczb ujemnych.\n", ujemne );
	printf( "Mamy %i zer \n", zerowe );


}


