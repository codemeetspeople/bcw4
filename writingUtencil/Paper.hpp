#ifndef PAPER_HPP
#define PAPER_HPP

#include <iostream>

class Paper {
    private:
        int maxSymbols;
        std:string content;

    public:
        Paper(int maxSymbols = 1024);

        int getMaxSymbols() const;
        void show() const;

        void addContent(const std::string& message);
};

std::ostream& operator<<(std::ostream& out, const Paper& paper);

#endif
