#pragma once
#include <string>
#include "Document.hpp"

class Holder
{
private:
    std::string name;
    Document document;
public:
    Holder(std::string name, Document document);
    std::string getName() const;
};

