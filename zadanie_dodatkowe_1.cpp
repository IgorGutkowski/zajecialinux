#include <iostream>
#include <string>

auto main() -> int {
    std::string imie1;
    std::string imie2;

    std::cout << "Wprowadz pierwsze imie: \n";
    std::cin >> imie1;
    std::cout << "Wprowadz drugie imie:\n";
    std::cin >> imie2;

    if (imie1.size() > imie2.size()) {
        std::cout << "Pierwsze imie jest dluzsze! \n";
    }

    else if (imie1.size() < imie2.size()){
            std::cout << "Drugie imie jest dluzsze...\n";
    }
    else{
            std::cout << "Imiona sa rowne.";
    }
return 0;
    }
