I C++ refererer begrebet "iterator" til et objekt, der bruges til at 
gennemgå elementerne i en samling (såsom en vektor, et array eller en liste) 
på en sekventiel måde. Iteratoren fungerer som et pegepind, der kan flyttes 
igennem samlingen og give adgang til hvert enkelt element.

Her er et eksempel på brugen af en iterator i C++:


#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Opret en iterator til at pege på starten af vektoren
    std::vector<int>::iterator it = numbers.begin();

    // Gennemgå vektoren ved hjælp af iterator
    while (it != numbers.end()) {
        // Udskriv elementet, som iterator peger på
        std::cout << *it << " ";

        // Flyt iterator til næste element
        ++it;
    }

    return 0;
}


I dette eksempel oprettes en vektor kaldet "numbers", der indeholder nogle tal. 
Derefter oprettes en iterator kaldet "it", der initialiseres til at pege på starten 
af vektoren ved hjælp af numbers.begin().

Derefter bruges iteratoren i en løkke til at gennemgå vektoren. 
Inde i løkken udskrives værdien af hvert element, som iteratoren peger på, ved hjælp af *it. 
Derefter flyttes iteratoren til næste element ved at øge den med ++it.

På denne måde kan du bruge iteratorer til at få adgang til og arbejde med elementerne i en samling i C++. 
Iteratorer kan også bruges til at ændre værdierne i samlingen eller indsætte/fjerne elementer.









