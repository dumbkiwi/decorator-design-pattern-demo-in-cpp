#ifndef MILKTEADECORATOR_H
#define MILKTEADECORATOR_H

#include <string>
#include "milktea.h"

class MilkteaDecorator : public IMilktea {
    protected:
        IMilktea* component;

    public:
        MilkteaDecorator(IMilktea* milktea) : component(milktea) {}

        int cost() const override { return this->component->cost(); }
        std::string name() const override { return this->component->name(); }
};

#endif // MILKTEADECORATOR_H
