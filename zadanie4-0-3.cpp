#include <iostream>
#include <string>
#include <vector>

 struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int>oceny;
};

int average_of(Student x)
{
    int sum = 0;
    int ile= x.oceny.size();
    for(auto i=0;i<=2;i++)
    {
    x.oceny.at(i);
    sum = sum + x.oceny.at(i);
    }
    return sum/ile;
}

void get_best_student(std::vector<Student>const &x)
{
    int a;
    int best;
    Student naj;
std::cout<<std::endl;
    for(auto i=0;i<x.size();i++){
        a = average_of(x.at(i));
        if(best <= a )
        {
            best = a;
        }
    }
    for(auto i=0;i<x.size();i++)
    {
        if(best == average_of(x.at(i)))
        {
           naj = x.at(i);
           std::cout<<"Najlepszy student to"<<" "<< naj.imie<<"."<<std::endl;
           break; // zeby wyswietlil sie tylko jeden student jesli kilku ma taka sama srednia

        }
    }
}

auto main() -> int
{
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


    std::vector<Student>studenci;
    studenci.push_back(pierwszy);
    studenci.push_back(drugi);
    studenci.push_back(trzeci);


    std::cout<<average_of(pierwszy)<<std::endl;
    std::cout<<average_of(drugi)<<std::endl;
    std::cout<<average_of(trzeci)<<std::endl;
    get_best_student(studenci);
    return 0;
}
