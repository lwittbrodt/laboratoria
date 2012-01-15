#include <stdio.h>
#include <stdlib.h>

#define dlugoscASCII 127;



int numerLitery (char znak)
{
        int nLitery = 0;

        if( znak >= 'a' && znak <= 'z' )
        {

                nLitery = (int)znak;

                return nLitery;

        }
else if( znak >= 'A' && znak <= 'Z' )
        {
                nLitery = (int)znak;

                return nLitery;
        }
else
{
                return nLitery;
        }
}

char literaASCII (int liczba)
{
        char znak;

        znak = (char)liczba;

        return znak;
}






main() {

int ileJakich[128][128];

// Zerowanie tablic

int i = 0;
int j = 0;

for( i = 0 ; i <= 127 ; i++ )
{
for( j = 0 ; j <= 127 ; j++ )
{
ileJakich[i][j] = 0;
}
}

char znak;
int nrZnaku;
char poprzedniZnak;
int nrPoprzedniegoZnaku;

poprzedniZnak = getchar();
znak = getchar();

while( znak != EOF )
{

nrZnaku = (int)znak;
nrPoprzedniegoZnaku = (int)poprzedniZnak;

poprzedniZnak = znak;
znak = getchar();


}

}
