#pragma once
#include <string>

class Holder
{
private:
    std::string name;
    std::string documentNumber;
public:
    Holder(std::string name, std::string documentNumber);
    std::string getName() const;
    std::string getDocumentNumber() const;
};

