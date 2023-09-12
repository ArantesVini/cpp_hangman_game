#include "Document.hpp"
#include <stdexcept>


Document::Document(std::string document)
{
    if (!isValidFormat(document))
    {
        throw std::invalid_argument("Invalid SSN format");
    }
    this->document = document;
}

bool Document::isValidFormat(std::string document)
{
    if (document.size() != 11)
    {
        return false;
    }
    for (int i = 0; i < 11; i++) {
        if (i == 3 || i == 6) {
            if (document[i] != '-')
                return false;
        }
        else {
            if (!std::isdigit(document[i]))
                return false;
        }
    }
    return true;
}

std::string Document::getDocument()
{
    return document;
}
