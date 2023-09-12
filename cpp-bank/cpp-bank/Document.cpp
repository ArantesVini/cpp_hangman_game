#include "Document.hpp"
#include <stdexcept>
#include <regex>


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
    std::regex ssnPattern("^\\d{3}-\\d{2}-\\d{4}$");

    return std::regex_match(document, ssnPattern);
}

std::string Document::getDocument()
{
    return document;
}
