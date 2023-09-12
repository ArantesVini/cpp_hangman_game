#include "Holder.hpp"

Holder::Holder(std::string name, std::string documentNumber):
    name(name),
    documentNumber(documentNumber)
{
}

std::string Holder::getName() const
{
    return name;
}

std::string Holder::getDocumentNumber() const
{
    return documentNumber;
}
