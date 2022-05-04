#ifndef MILKTEAJELLY_H
#define MILKTEAJELLY_H

#include <string>
#include "milkteaDecorator.h"

class MilkteaJelly : public MilkteaDecorator {
    public:
        MilkteaJelly(IMilktea* milktea) : MilkteaDecorator(milktea) {}

        int cost() const override { return 5 + MilkteaDecorator::cost(); }
        std::string name() const override { return "MilkteaJelly( " + MilkteaDecorator::name() + " )"; }
};

#endif // MILKTEAJELLY_H
