
I C++ er en pointer en variabel, der indeholder en hukommelsesadresse. 
Pointeren peger på en værdi eller et objekt i hukommelsen. 
Den giver dig mulighed for at manipulere og arbejde direkte med hukommelsen i dit program.

Her er et enkelt eksempel på brugen af en pointer i C++:


#include <iostream>

// Funktion der ændrer værdien af en variabel via en pointer
void ændrVærdi(int *ptr) {
    *ptr = 20; // Ændrer værdien af variablen, som ptr peger på
}

int main() {
    int num = 10; // En almindelig variabel

    std::cout << "Før kaldet til ændrVærdi: " << num << std::endl;

    ændrVærdi(&num); // Sender adressen af num som argument

    std::cout << "Efter kaldet til ændrVærdi: " << num << std::endl;

    return 0;
}

I dette eksempel defineres en funktion ændrVærdi, der tager en pointer som parameter. 
Ved at bruge *ptr kan vi ændre værdien af variablen, som pointeren peger på.

I main-funktionen deklareres en variabel num med værdien 10. 
Vi udskriver værdien af num før kaldet til ændrVærdi. 
Derefter kalder vi funktionen ændrVærdi med &num som argument, hvilket sender adressen af num til funktionen. 
Inde i funktionen ændres værdien af variablen, som pointeren peger på, til 20.

Efter at have kaldt funktionen udskriver vi igen værdien af num. 
Nu vil værdien være ændret til 20, fordi vi har ændret den via pointeren inde i funktionen.

Outputtet vil være:

    Før kaldet til ændrVærdi: 10
    Efter kaldet til ændrVærdi: 20


Bemærk, at ved at sende variablens adresse som argument kan vi ændre værdien af 
variablen uden at returnere den fra funktionen. Dette er en af de 
kraftige funktioner ved brugen af pointere i C++.


 
