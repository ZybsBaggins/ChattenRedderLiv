I C++ er en klasse en grundlæggende byggesten til at definere objekter og deres adfærd. 
En klasse er en skabelon eller en blueprint, der beskriver de egenskaber og metoder, 
som et objekt af den klasse kan have.

Lad os tage et simpelt eksempel på en klasse i C++, der repræsenterer en bil:


#include <iostream>

class Bil {
private:
    std::string mærke;
    int årgang;
    int hastighed;

public:
    Bil(std::string m, int å, int h) {
        mærke = m;
        årgang = å;
        hastighed = h;
    }

    void visInformation() {
        std::cout << "Mærke: " << mærke << std::endl;
        std::cout << "Årgang: " << årgang << std::endl;
        std::cout << "Hastighed: " << hastighed << std::endl;
    }
};

int main() {
    Bil minBil("Ford", 2010, 120);
    minBil.visInformation();

    return 0;
}


I dette eksempel defineres klassen Bil, som har tre private medlemmer: mærke, årgang og hastighed. 
Disse medlemmer repræsenterer egenskaberne for en bil, 
og de kan kun tilgås inden for klassens egne medlemsfunktioner.

Der er også en offentlig medlemsfunktion visInformation(), som udskriver informationen om bilen til konsollen. 
Denne funktion er tilgængelig uden for klassen og kan bruges til at få adgang til og 
manipulere bilobjektets tilstand.

I main()-funktionen oprettes et objekt af klassen Bil ved navn minBil. 
Objektet initialiseres med værdierne "Ford" som mærke, 2010 som årgang og 120 som hastighed. 
Derefter kaldes visInformation()-funktionen på objektet for at udskrive bilens information.

Klassen er en måde at organisere data og adfærd på, og ved at oprette flere objekter af klassen 
kan vi håndtere forskellige biler med individuelle egenskaber og opførsel.


----------------------------------------------------------------

EKSEMPEL 2

#include <iostream>
using namespace std;

// Definition af Bil-klassen
class Bil {
public:
    string mærke;
    string model;
    int årgang;

    void visInfo() {
        cout << "Bilens mærke: " << mærke << endl;
        cout << "Bilens model: " << model << endl;
        cout << "Bilens årgang: " << årgang << endl;
    }
};

int main() {
    // Oprettelse af objekter af Bil-klassen
    Bil bil1;
    Bil bil2;

    // Tilskrivning af værdier til objekternes egenskaber
    bil1.mærke = "Toyota";
    bil1.model = "Corolla";
    bil1.årgang = 2018;

    bil2.mærke = "Ford";
    bil2.model = "Mustang";
    bil2.årgang = 2020;

    // Kald af metoden visInfo() på objekterne
    bil1.visInfo();
    bil2.visInfo();

    return 0;
}