#include "maarittely.h"
int main()
{
	TIEDOT tiedot[10];
	TIEDOT t;
	TIEDOT *osoitin;
	int valinta;
	int i, j=0;
	for(i=0;i == 0;)
	{
		valinta=Valikko();
		if(valinta == 0)
		{
			cout<<"Lopetetaan"<<endl;
			i++;
		}
		if(valinta == 1)
		{
			LisaaHenkilo(&tiedot[0], &j);
			j++;
		}
		if(valinta == 2)
		{
			TulostaKaikkiHenkilot(&tiedot[0], j);
		}
		if(valinta == 3)
		{
			TulostaHenkilo(&tiedot[0]);
			
		}
		if(valinta>3||valinta<0)
			cout<<"ERROR"<<endl;
	}
return 0;
}
