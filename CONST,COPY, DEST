
1. CONSTRUCT (Konstruktion):
    "CONSTRUCT" refererer til processen med at oprette 
    et objekt af en klasse. Når et objekt er konstrueret, 
    allokeres hukommelse til det, og dets medlemmer initialiseres. 
    Konstruktøren i en klasse bruges til at udføre denne initialisering.

Eksempel:
Lad os overveje en simpel klasse kaldet "Bog", der har en attribut "titel". 
Når vi konstruerer et objekt af "Bog" klassen, vil konstruktøren blive kaldt, 
og titlen kan blive initialiseret.


#include <iostream>
#include <string>

class Bog {
public:
    Bog(const std::string& t) : titel(t) {
        std::cout << "Bog konstrueret med titel: " << titel << std::endl;
    }

private:
    std::string titel;
};

int main() {
    Bog minBog("Harry Potter");
    return 0;
}


Output:

Bog konstrueret med titel: Harry Potter
//


Her ser vi, at når objektet "minBog" konstrueres, 
bliver konstruktøren kaldt og titlen "Harry Potter" bliver initialiseret.


-----------------------------------------------------------------------------------------------
2. COPY (Kopiering):
    "COPY" refererer til processen med at oprette en kopi af et objekt. 
    Dette sker normalt, når et objekt tildeles eller passeret som argument 
    til en funktion. Standard-kopikonstruktøren kopierer medlemsværdierne 
    fra det eksisterende objekt til det nye objekt.

Eksempel:
Lad os fortsætte med vores "Bog" klasse og oprette en kopi af et 
objekt ved at tildele det til en anden variabel


#include <iostream>
#include <string>

class Bog {
public:
    Bog(const std::string& t) : titel(t) {
        std::cout << "Bog konstrueret med titel: " << titel << std::endl;
    }

    void VisTitel() const {
        std::cout << "Bogtitel: " << titel << std::endl;
    }

private:
    std::string titel;
};

int main() {
    Bog minBog("Harry Potter");
    Bog kopiBog = minBog;
    kopiBog.VisTitel();
    return 0;
}

Output:

Bog konstrueret med titel: Harry Potter
Bogtitel: Harry Potter
//

Her opretter vi først et objekt "minBog" med titlen "Harry Potter". 
Derefter opretter vi et nyt objekt "kopiBog" og tildeler det værdierne 
fra "minBog". Når vi viser titlen på "kopiBog", ser vi, at det er en kopi af "minBog".

----------------------------------------------------------------

3. DESTRUCT (Destruktion):
    "DESTRUCT" refererer til processen med at ødelægge et objekt og frigive den hukommelse, 
    der er allokeret til det. Destruktøren i en klasse bruges til at udføre eventuelle 
    nødvendige oprydningsopgaver, f.eks. at frigive ressourcer eller afmelde hændelseshåndterere

Eksempel:
Lad os udvide vores "Bog" klasse og tilføje en destruktør, der udskriver en besked, når et objekt ødelægges.


#include <iostream>
#include <string>

class Bog {
public:
    Bog(const std::string& t) : titel(t) {
        std::cout << "Bog konstrueret med titel: " << titel << std::endl;
    }

    ~Bog() {
        std::cout << "Bog destrueret med titel: " << titel << std::endl;
    }

private:
    std::string titel;
};

int main() {
    Bog minBog("Harry Potter");
    return 0;
}


Output:

Bog konstrueret med titel: Harry Potter
Bog destrueret med titel: Harry Potter
//

Her ser vi, at når objektet "minBog" går ud af sin scope (ved slutningen af "main" funktionen), 
bliver destruktøren kaldt, og en besked om ødelæggelsen bliver udskrevet. Dette viser, 
at objektet er blevet destrueret, og hukommelsen er blevet frigivet.