#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Passport 
{

protected:

    string fullName;
    string passportNumber;
    string dateOfBirth;
    string nationality;

public:
    Passport() : Passport("Olena", "12345", "09.04.05", "ukrainian") {}

    Passport(string fullName) : Passport(fullName, "12345", "09.04.05", "ukrainian") {}

    Passport(string fullName, string passportNumber, string dateOfBirth, string nationality)
    {
        SetfullName(fullName);
        SetpassportNumber(passportNumber);
        SetdateOfBirth(dateOfBirth);
        Setnationality(nationality);

    }

    void SetfullName(string fullName)
    {};
    void SetpassportNumber(string passportNumber)
    {};
    void SetdateOfBirth(string dateOfBirth)
    {};
    void Setnationality(string nationality)
    {};

};

class ForeignPassport : public Passport
{

protected:

    vector<Visa> visas;

public:

    ForeignPassport() : ForeignPassport("Olena", "12345", "09.04.05", "ukrainian") {}

    ForeignPassport(string fullName, string passportNumber, string dateOfBirth, string nationality) 
    {
        SetfullName(fullName);
        SetpassportNumber(passportNumber);
        SetdateOfBirth(dateOfBirth);
        Setnationality(nationality);
    }


    void addVisa(const Visa& visa)
    {

        visas.push_back(visa);
    }

};


class Visa {

private:

    string country;
    string expirationDate;

public:

    Visa() : Visa("Ukraine", "09.04.15") 
    {}

    Visa(string country, string expirationDate)
    {
        Setcountry(country);
        SetexpirationDate(expirationDate);

    }


private:
    void Setcountry(string country)
    {};

    void SetexpirationDate(string expirationDate);
    {};
};

int main() {
    
}