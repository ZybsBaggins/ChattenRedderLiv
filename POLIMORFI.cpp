I C++ refererer "polymorfi" til evnen til at have flere forskellige former eller betydninger. 
I objektorienteret programmering tillader polymorfi, at objekter af forskellige 
typer kan opføre sig på en ensartet måde.

Et eksempel på polymorfi i C++ er ved brug af funktionsoverbelastning. 
Funktionsoverbelastning indebærer at have flere funktioner med samme navn, 
men med forskellige parametre. Lad os se på et eksempel:


#include <iostream>

void print(int num) {
    std::cout << "Tallet er: " << num << std::endl;
}

void print(double num) {
    std::cout << "Tallet er: " << num << std::endl;
}

int main() {
    int heltal = 42;
    double flydendeTal = 3.14;

    print(heltal);          // Kalder print(int num)
    print(flydendeTal);     // Kalder print(double num)

    return 0;
}


I ovenstående eksempel er der to funktioner med navnet "print". 
Den ene tager en parameter af typen "int", og den anden tager en parameter af typen "double". 
Når vi kalder funktionen "print" med enten et heltal eller et flydende tal som argument, 
vil den korrekte funktion blive kaldt baseret på typen af argumentet. Dette er et eksempel 
på compile-time polymorfi eller statisk polymorfi, hvor den rette funktion vælges ved kompileringstid.


Et andet eksempel på polymorfi i C++ er ved brug af virtuelle funktioner og arv. Lad os se på et eksempel:


#include <iostream>

class Dyr {
public:
    virtual void lyd() {
        std::cout << "Dyret siger: *ukendt lyd*" << std::endl;
    }
};

class Hund : public Dyr {
public:
    void lyd() override {
        std::cout << "Hunden siger: Vov!" << std::endl;
    }
};

class Kat : public Dyr {
public:
    void lyd() override {
        std::cout << "Katten siger: Mjav!" << std::endl;
    }
};

int main() {
    Dyr* dyr1 = new Hund();
    Dyr* dyr2 = new Kat();

    dyr1->lyd();    // Udskriver "Hunden siger: Vov!"
    dyr2->lyd();    // Udskriver "Katten siger: Mjav!"

    delete dyr1;
    delete dyr2;

    return 0;
}


I dette eksempel har vi en baseklasse "Dyr" med en virtuel funktion "lyd". 
Vi opretter derefter to afledte klasser "Hund" og "Kat", som overskriver "lyd"-funktionen. 
Når vi opretter objekter af disse klasser og kalder "lyd"-funktionen, 
vil den korrekte version af funktionen blive kaldt baseret på objektets faktiske type. 
Dette er et eksempel på runtime polymorfi eller dynamisk polymorfi, 
hvor den rette funktion vælges ved runtime baseret på objektets type.

Polymorfi er en kraftfuld funktion i C++, da den giver mulighed for at skabe mere fleksible og 
genbrugbare kodeløsninger ved at tillade objekter at opføre sig på forskellige måder afhængigt af deres type.
