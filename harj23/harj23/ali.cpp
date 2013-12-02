#include "maarittely.h"
int Valikko(void)
{
	int valinta;
		cout<<"----------------"<<endl<<"VALIKKO"<<endl<<"0 Lopeta"<<endl<<"1 Lisaa henkilo"<<endl<<"2 Nayta kaikki henkilot"<<endl<<"3 Nayta yksi henkilo"<<endl;
		cin>>valinta;
		return valinta;
}
void TulostaHenkilo(TIEDOT tiedot[10])
{
	int k;
	cout<<"Monesko henkilo? 0-9"<<endl;
	cin>>k;
	cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			
	return;
}
void TulostaKaikkiHenkilot(TIEDOT tiedot[10], int j)
{
			for(int k=0; k<j; k++)
			{
				cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			}
}
void LisaaHenkilo(TIEDOT tiedot[10], int *j)
{
	TIEDOT t;
			cout<<"Anna nimi, koulumatka ja hatun koko"<<endl;
			cin>>t.nimi>>ws>>t.matka>>ws>>t.koko;
			tiedot[*j] = t;
}
