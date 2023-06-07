
ARV (arv) står for "arv" og er en vigtig koncept inden for objektorienteret programmering (OOP) i C++. 
ARV indebærer at oprette hierarkier af klasser, hvor en klasse (kaldet en underklasse eller barnklasse) 
kan arve egenskaber og adfærd fra en anden klasse (kaldet en overklasse eller forældreklasse).

Lad os se på et eksempel, der viser brugen af arv i C++:


#include <iostream>
using namespace std;

// Forældreklasse
class Person {
protected:
    string navn;

public:
    void sætNavn(string n) {
        navn = n;
    }

    void visNavn() {
        cout << "Navn: " << navn << endl;
    }
};

// Barnklasse, der arver fra Person
class Studerende : public Person {
private:
    int studieNummer;

public:
    void sætStudieNummer(int nummer) {
        studieNummer = nummer;
    }

    void visStudieNummer() {
        cout << "Studienummer: " << studieNummer << endl;
    }
};

int main() {
    // Opret en instans af Studerende-klassen
    Studerende studerende;

    // Brug metoder fra både Person og Studerende klasserne
    studerende.sætNavn("Peter");
    studerende.visNavn();
    studerende.sætStudieNummer(12345);
    studerende.visStudieNummer();

    return 0;
}


I dette eksempel har vi to klasser: Person og Studerende. 
Klassen Studerende er en underklasse af Person, og den bruger offentlig arv (public inheritance) 
for at arve egenskaberne og metoderne fra Person.

Person-klassen har et beskyttet medlemsfelt navn samt metoderne sætNavn og visNavn.
Studerende-klassen har et privat medlemsfelt studieNummer samt metoderne sætStudieNummer og visStudieNummer. 
Ved at arve fra Person-klassen får Studerende-klassen adgang til 
navn-medlemsfeltet og sætNavn- og visNavn-metoderne.

I main-funktionen opretter vi en instans af Studerende-klassen og bruger metoderne fra både 
Person og Studerende klasserne. Vi kan sætte og vise både navnet og studienummeret for en studerende.

Arv er nyttigt, når der er en hierarkisk relation mellem klasser, 
og når man ønsker at genbruge kode og oprette specialiserede klasser baseret på en mere generel klasse.










