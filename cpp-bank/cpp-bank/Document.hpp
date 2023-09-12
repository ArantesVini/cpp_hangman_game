#pragma once
#include <string>

class Document {
private:
    std::string document;
    bool isValidFormat(std::string document);
public:
    Document(std::string document);
    std::string getDocument();
};
