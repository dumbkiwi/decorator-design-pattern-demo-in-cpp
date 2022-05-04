#ifndef MILKTEATOPPINGS_H
#define MILKTEATOPPINGS_H

#include <string>
#include "milkteaDecorator.h"

class MilkteaToppings : public MilkteaDecorator
{
public:
    MilkteaToppings(IMilktea* milktea) : MilkteaDecorator(milktea) {}
    
    int cost() const override { return 4 + MilkteaDecorator::cost(); }
    std::string name() const override { return "MilkteaToppings( " + MilkteaDecorator::name() + " )"; }
};

#endif // MILKTEATOPPINGS_H
