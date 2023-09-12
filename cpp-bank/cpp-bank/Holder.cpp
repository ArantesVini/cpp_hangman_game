#include "Holder.hpp"

Holder::Holder(std::string name, Document document):
    name(name),
    document(document)
{
}

std::string Holder::getName() const
{
    return name;
}
