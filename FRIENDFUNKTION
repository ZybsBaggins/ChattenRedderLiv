I C++ kan du oprette en "Friend" funktion, der giver adgang til private og beskyttede 
medlemsfunktioner og -variabler i en klasse til en ekstern funktion eller klasse. Dette tillader 
den eksterne funktion eller klasse at manipulere eller få adgang til de private detaljer i klassen.

Her er et eksempel på, hvordan du bruger en Friend funktion i C++:


#include <iostream>

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    friend void AccessPrivateData(MyClass obj);
};

// Friend funktionen kan få adgang til private medlemmer af MyClass
void AccessPrivateData(MyClass obj) {
    std::cout << "Friend funktionen har adgang til privateData: " << obj.privateData << std::endl;
}

int main() {
    MyClass myObj(42);
    AccessPrivateData(myObj);

    return 0;
}

I dette eksempel har vi en klasse ved navn "MyClass" med et privat medlem 
kaldet "privateData". Vi har også defineret en friend funktion ved navn "AccessPrivateData", 
der kan få adgang til og udskrive værdien af det private medlem.

I main-funktionen opretter vi en instans af MyClass med værdien 42 og kalder derefter 
friend funktionen "AccessPrivateData" med denne instans som argument. 
Friend funktionen kan derefter få adgang til det private medlem og udskrive værdien.

Outputtet af dette program vil være:

Friend funktionen har adgang til privateData: 42
//

Bemærk, at friend funktioner ikke er medlemmer af klassen, men de kan stadig få adgang til de private medlemmer. 
Dette kan være nyttigt i visse situationer, hvor du har brug for en ekstern funktion 
eller klasse til at arbejde tæt sammen med klassen og manipulere dens private detaljer.








