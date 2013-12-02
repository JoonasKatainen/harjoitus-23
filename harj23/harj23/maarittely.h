#include <iostream>//d-kohta
using namespace std;
struct TIEDOT
{
	char nimi[20];
	float matka;
	int koko;
};
void TulostaKaikkiHenkilot(TIEDOT tiedot[10], int j);
void LisaaHenkilo(TIEDOT tiedot[10], int *j);
void TulostaHenkilo(TIEDOT tiedot[10]);
int Valikko(void);
