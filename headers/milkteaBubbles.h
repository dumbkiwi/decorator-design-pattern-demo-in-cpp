#ifndef MILKTEABUBBLES_H
#define MILKTEABUBBLES_H

#include <string>
#include "milkteaDecorator.h"

class MilkteaBubbles : public MilkteaDecorator {
    public:
        MilkteaBubbles(IMilktea* milktea) : MilkteaDecorator(milktea) {}

        int cost() const override { return 2 + MilkteaDecorator::cost(); }
        std::string name() const override { return "MilkteaBubbles( " + MilkteaDecorator::name() + " )"; }
};

#endif // MILKTEABUBBLES_H
