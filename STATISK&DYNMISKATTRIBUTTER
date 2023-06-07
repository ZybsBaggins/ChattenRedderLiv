I C++ refererer statiske og dynamiske attributter til forskellige typer af medlemsvariabler i en klasse. 
Her er en forklaring på dansk med eksempler:

Statiske attributter:
En statisk attribut tilhører selve klassen i stedet for en specifik instans af klassen. 
Det betyder, at værdien af en statisk attribut er den samme for alle objekter af klassen. 
Du kan få adgang til en statisk attribut uden at oprette en instans af klassen.

Her er et eksempel:


#include <iostream>

class Bil {
public:
  static int antalBiler;

  Bil() {
    antalBiler++;  // Inkrementerer antallet af biler ved oprettelse af en ny bil
  }
};

int Bil::antalBiler = 0;  // Initialisering af den statiske attribut

int main() {
  Bil bil1;
  Bil bil2;
  Bil bil3;

  std::cout << "Antal biler: " << Bil::antalBiler << std::endl;
  // Output: Antal biler: 3

  return 0;
}


I dette eksempel har vi en klasse kaldet "Bil" med en statisk attribut kaldet "antalBiler". 
Ved oprettelse af hver ny bil øges værdien af "antalBiler" med 1. 
Da det er en statisk attribut, er dens værdi den samme for alle objekter af klassen. 
I slutningen af programmet udskriver vi antallet af biler ved at bruge klasseens navn og den statiske attribut.


----------------------------------------------------------------


Dynamiske attributter:
En dynamisk attribut er en almindelig medlemsvariabel i en klasse, der tilhører hver instans af klassen. 
Hver instans har sin egen kopi af variablen, og dens værdi kan ændres uafhængigt af andre instanser.

Her er et eksempel:


#include <iostream>

class Person {
public:
  std::string navn;  // Dynamisk attribut

  Person(std::string n) {
    navn = n;  // Sætter navnet til værdien givet ved oprettelse af en ny person
  }
};

int main() {
  Person person1("Alice");
  Person person2("Bob");

  std::cout << "Person 1: " << person1.navn << std::endl;
  // Output: Person 1: Alice

  std::cout << "Person 2: " << person2.navn << std::endl;
  // Output: Person 2: Bob

  person1.navn = "Carol";  // Ændrer navnet for person1

  std::cout << "Person 1 (opdateret): " << person1.navn << std::endl;
  // Output: Person 1 (opdateret): Carol

  return 0;
}

I dette eksempel har vi en klasse kaldet "Person" med en dynamisk attribut kaldet "navn". 
Ved oprettelse af hver ny person bliver navnet sat til en værdi, der er givet som argument til konstruktøren. 
Hver person har sin egen kopi af "navn" og kan ændre sin egen værdi uafhængigt af andre personer. 
I slutningen af programmet udskriver vi navnene for hver person og demonstrerer ændringen af person1's navn.


----------------------------------------------------------------

    HVORNÅR BRUGER MAN DEM

Man bruger statiske og dynamiske attributter i forskellige situationer afhængigt af 
behovet og det ønskede adfærd i ens C++-program. Her er typiske scenarier, 
hvor man bruger de forskellige attributter:

Statiske attributter:

1. Deling af data: Hvis du har data, der skal deles på tværs af alle instanser af en klasse, er
    en statisk attribut velegnet. For eksempel kan du bruge en statisk attribut til at tælle 
    antallet af objekter oprettet af en klasse eller til at gemme en fælles ressource.

2. Konstante værdier: Hvis en værdi er konstant og den samme for alle objekter af en klasse,
    kan du erklære den som en statisk konstant attribut. Det sparer hukommelse ved kun at 
    have én kopi af værdien.

3. Klasse-specifik funktionalitet: Nogle gange er der funktionalitet, der er relateret til 
    Klasse-specifik funktionalitet: Nogle gange er der funktionalitet, der er relateret til 
    metoder, der arbejder på statiske attributter og ikke kræver en instans af klassen.


Dynamiske attributter:

1. Individuelle data for hver instans: Hvis hver instans af en klasse har brug for sit eget sæt 
    af data, der kan variere uafhængigt af andre instanser, bruger du dynamiske attributter.
    Dette kan være egenskaber som navn, alder, placering osv.

2. Tilstandsstyring: Dynamiske attributter kan bruges til at opretholde og ændre tilstanden 
    for hver instans af en klasse. For eksempel kan du bruge en dynamisk attribut til at holde 
    styr på statussen for en bestemt operation eller til at opbevare midlertidige værdier
    under eksekvering af en metode.


Det er vigtigt at bemærke, at valget mellem statiske og dynamiske attributter også kan 
afhænge af designmæssige overvejelser og principper som datahiding, encapsulation og 
modulæritet i dit program.

