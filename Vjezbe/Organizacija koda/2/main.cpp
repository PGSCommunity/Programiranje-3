#include <iostream>
#include "ucenik.h"
#include "maturant.h"
using namespace std;

int main(int argc, char** argv) {
	Ucenik u1("Danin", "III-f");
	u1.Ispisi();
	
	Maturant u2("Sarah", "IV-f", "programiranje");
	u2.Ispisi();
	return 0;
}

/*

Rasporedi sljedecu klasu u pakete:
class Ucenik{
	protected:	
	string ime, odjeljenje;
		
	public:
			
	Ucenik( string i, string o) 	{  ime=i, odjeljenje=o;	}
	string VratiIme () {return ime;}
	string VratiOdjeljenje () {return odjeljenje;}
	void Ispisi(){
		cout <<"Ucenik "<<ime<<" je "<<odjeljenje<<" odjeljenje\n ";
	}
			
	};
	
	class Maturant : public Ucenik{
		
		string predmet_maturskog;
		
		public:
			
			Maturant(string ime, string odjeljenje, string pred_mat):Ucenik(ime,odjeljenje),predmet_maturskog(pred_mat){};
			string VratiPredmet(){return predmet_maturskog;}
				void Ispisi(){
		cout <<"Ucenik "<<ime<<" je "<<odjeljenje<<" odjeljenje, radi maturski rad iz predmeta  "<<predmet_maturskog<<endl;
	}
		
	};

*/
