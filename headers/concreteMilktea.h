#ifndef CONCRETEMILKTEA_H
#define CONCRETEMILKTEA_H

#include <string>
#include "milktea.h"
#include "milkteaDecorator.h"

class ConcreteMilktea : public IMilktea {
    public:
        int cost() const override {
            return 10;
        }

        std::string name() const override {
            return "ConcreteMilktea";
        }
};

#endif // CONCRETEMILKTEA_H
