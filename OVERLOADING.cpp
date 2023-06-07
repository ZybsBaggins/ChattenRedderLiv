I C++ er overloading en måde at definere flere 
funktioner eller operatører med samme navn, men 
med forskellige parametre. Dette gør det muligt 
at bruge den samme funktion eller operatør på 
forskellige måder, afhængigt af typen eller 
antallet af argumenter, der gives til den.

Her er et eksempel på overloading i C++:

----------------------------------------------------------------
#include <iostream>

// Funktion til at finde den største værdi mellem to heltal
int findStørste(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

// Funktion til at finde den største værdi mellem tre heltal
int findStørste(int a, int b, int c) {
  if (a > b && a > c) {
    return a;
  } else if (b > a && b > c) {
    return b;
  } else {
    return c;
  }
}

int main() {
  int x = 5;
  int y = 10;
  int z = 7;

  int største1 = findStørste(x, y);      // Kalder den første funktion
  int største2 = findStørste(x, y, z);   // Kalder den anden funktion

  std::cout << "Det største tal mellem " << x << " og " << y << " er: " << største1 << std::endl;
  std::cout << "Det største tal mellem " << x << ", " << y << " og " << z << " er: " << største2 << std::endl;

  return 0;
}

----------------------------------------------------------------

I dette eksempel defineres der to funktioner med navnet findStørste, 
men de tager forskellige antal argumenter. Den første funktion tager 
to heltal som argumenter og returnerer det største tal mellem dem. 
Den anden funktion tager tre heltal som argumenter og returnerer det største tal mellem dem.

I main-funktionen kaldes begge funktioner med forskellige sæt af argumenter, 
og resultatet bliver udskrevet. Ved at overbelaste findStørste-funktionen 
kan vi bruge den samme funktion til at håndtere forskellige antal argumenter, 
hvilket gør koden mere fleksibel og genbrugbar.


