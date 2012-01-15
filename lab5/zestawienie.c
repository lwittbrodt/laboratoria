#include<stdio.h>
main()

{

	int i,dodatnie,zera,ujemne,n;
	int liczba;


	dodatnie=0;
	zera=0;
	ujemne=0;


	printf("Podaj ilosc liczb: ");
	scanf("%i ", &liczba);
	  
	for(i=0;i<liczba;i++)
	{
		   scanf("%d\n ",&n);

		   if (n>0) dodatnie++; else ujemne++;
		   if (n==0) zera++;

	}

	printf("ZERA : %i : ",zera);
	printf("UJEMNE : %i ",ujemne);
	printf("DODATNIE : %i ",dodatnie);


}
