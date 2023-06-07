I C++ er en vector en type container, der kan indeholde 
en samling af elementer. Den ligner en liste, hvor elementerne 
kan tilføjes og fjernes dynamisk. En vector kan indeholde 
elementer af samme type, f.eks. heltal eller strenge.

Her er et eksempel på, hvordan man bruger en vector i C++:

----------------------------------------------------------------
#include <iostream>
#include <vector>

int main() {
   // Opret en vector af heltal
   std::vector<int> tal;

   // Tilføj elementer til vector
   tal.push_back(10);
   tal.push_back(20);
   tal.push_back(30);

   // Udskriv elementerne i vector
   std::cout << "Elementerne i vector er: ";
   for (int i = 0; i < tal.size(); i++) {
      std::cout << tal[i] << " ";
   }
   std::cout << std::endl;

   // Fjern det sidste element fra vector
   tal.pop_back();

   // Udskriv elementerne igen efter fjernelse
   std::cout << "Elementerne i vector efter fjernelse er: ";
   for (int i = 0; i < tal.size(); i++) {
      std::cout << tal[i] << " ";
   }
   std::cout << std::endl;

   return 0;
}

----------------------------------------------------------------

I dette eksempel oprettes en vector med navnet "tal", der indeholder heltal. 
Tre tal (10, 20 og 30) tilføjes til vector ved hjælp af push_back-funktionen. 
Derefter udskrives alle elementerne ved at iterere over vector og få adgang 
til elementerne ved hjælp af indekser. Efterfølgende fjernes det sidste 
element ved hjælp af pop_back-funktionen, og vectoren udskrives 
igen for at vise ændringerne.


Outputtet af programmet vil være:
    Elementerne i vector er: 10 20 30 
    Elementerne i vector efter fjernelse er: 10 20 

