#include <iostream>
using namespace std;

int main() {

    return 0;
}

/*
Kreirati klasu Brojevi. 
Klasa posjeduje atribute (koji predstavljaju tri broja). 
Atributi nisu javni. 
Klasa sadrži i konstruktor čiji je zadatak vrijednosti proslijeđene iz glavne funkcije konvertovati na način da 
budu sačuvani kao cijeli brojevi (npr. 2.33 treba biti spremljeno kao 2).
Klasa sadrži metodu naslov()koja ispisuje poruku Cio dio unesenih brojeva iznosi
Klasa sadrži metodu ispis() koja ispisuje tri cijela broja.
Klasa sadrži metodu izvjesce() koja sadrži metode naslov() i ispis():
Kreirati podklasu podklasu Trougao koja nasljeđuje atribute i metode klase Brojevi.
Klasa sadrži privatni atribut povrsina.
Klasa sadrži konstruktor (nasljeđen  iz roditeljske klase, a atribut povrsina inicijalizira na 0).
Klasa sadrži  metodu  naslov()koja ispisuje poruku „Provjeravamo da li ucitane stranice cine trougao“.
Klasa sadrži metodu ispis() koja racuna i ispisuje povrsinu trougla ukoliko učitani brojevi mogu činiti stranice
trougla, u suprotnom ispisuje poruku“Stranice ne cine trougao!“.

U glavnoj funkciji omogućiti unos tri realna broja, te formirati objekte nad klasama. Pomoću objekata iz obje klase pozvati funkciju izvjesce().
Program treba da ispiše sve što je predpostavlja ispis u postavci zadatka a tiče se obje klase. Na kraju se ispisuje dvostruka vrijednost atributa povrsina iz klaseTrougao.

*/