#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Hello, world!\n");
	return 0;
}

/*

Rasporedi sljedecu klasu u pakete:
lass Ucenik{
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
