#include <iostream>
#include <string>
#include <vector>

 struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int>oceny;
};

struct grupa{

    std::string nazwa;
    std::vector<Student>czlonkowie;

    grupa(std::string const& i){
    nazwa = i;
    }

};

void add_student(grupa& g, Student const& s){
g.czlonkowie.push_back(s);
}

auto main() -> int{

 Student pierwszy;
    pierwszy.imie = "Adam";
    pierwszy.nazwisko = "Adamski";
    pierwszy.oceny.push_back(4);
    pierwszy.oceny.push_back(5);
    pierwszy.oceny.push_back(3);

    Student drugi;
    drugi.imie = "Bartosz";
    drugi.nazwisko = "Bartoszewski";
    drugi.oceny.push_back(3);
    drugi.oceny.push_back(3);
    drugi.oceny.push_back(3);

    Student trzeci;
    trzeci.imie = "Cezary";
    trzeci.nazwisko = "Cezarski";
    trzeci.oceny.push_back(5);
    trzeci.oceny.push_back(4);
    trzeci.oceny.push_back(3);

     Student czwarty;
    czwarty.imie = "Dawid";
    czwarty.nazwisko = "Dawidowicz";
    czwarty.oceny.push_back(3);
    czwarty.oceny.push_back(3);
    czwarty.oceny.push_back(5);

    auto grupa1 = grupa("17c");
    auto grupa2 = grupa("18c");

    add_student(grupa2,czwarty);
    add_student(grupa2,pierwszy);
    add_student(grupa1,trzeci);
    std::cout<<"Czlonkowie drugiej grupy: ";
    for(auto i : grupa2.czlonkowie){
        std::cout<< i.imie<<" "<<i.nazwisko<<", " ;
    }

    std::cout<<std::endl<<"Czlonkowie pierwszej grupy: ";
    for(auto i : grupa1.czlonkowie){
        std::cout<< i.imie<<" "<<i.nazwisko<< ", ";
    }

    return 0;
}
