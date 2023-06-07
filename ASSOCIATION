I C++ er en "association" en relation mellem to klasser, 
hvor objekter af den ene klasse kan have en reference eller en pointer til objekter af den anden klasse. 
Denne relation tillader adgang til funktioner og data fra den tilknyttede klasse.

Lad os tage et simpelt eksempel med klasserne "Bil" og "Motor". 
Her vil "Bil" have en association med "Motor", da en bil normalt har en motor.


#include <iostream>

// Definition af Motor-klassen
class Motor {
private:
    int antalCylindre;

public:
    Motor(int antal) {
        antalCylindre = antal;
    }

    void start() {
        std::cout << "Motoren starter!" << std::endl;
    }
};

// Definition af Bil-klassen
class Bil {
private:
    Motor* motor; // Association med Motor-klassen

public:
    Bil() {
        motor = new Motor(4); // Opretter en motor med 4 cylindre
    }

    void startBil() {
        motor->start(); // Kalder start-funktionen fra Motor-klassen
    }
};

int main() {
    Bil minBil;
    minBil.startBil(); // Starter bilen og motoren

    return 0;
}


I dette eksempel har klassen "Bil" en association med klassen "Motor". 
I "Bil"-klassen er der en pointer til en "Motor"-klasse. 
Når vi opretter en bil ved at oprette et objekt af "Bil"-klassen, 
initialiseres motoren med 4 cylindre. 
Derefter kan vi kalde funktionen startBil() på bilobjektet, 
som i sin tur kalder start()-funktionen fra "Motor"-klassen, 
hvilket resulterer i udskriften "Motoren starter!"

Associationen mellem "Bil" og "Motor" giver os mulighed for at få adgang til motoren 
og udføre funktioner på den, selvom vi kun har et objekt af "Bil"-klassen. 
Dette demonstrerer, hvordan association i C++ tillader objekter at interagere og samarbejde på tværs af klasser.


