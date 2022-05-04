#include <iostream>
#include <string>

#include "./headers/concreteMilktea.h"
#include "./headers/milktea.h"
#include "./headers/milkteaBubbles.h"
#include "./headers/milkteaJelly.h"

//----------------------------------------------------------------
//-newly implemented wrapper--------------------------------------
//----------------------------------------------------------------
// #include "./headers/milkteaToppings.h"
//----------------------------------------------------------------
//----------------------------------------------------------------

void ClientCode(IMilktea* milktea) {
    std::cout << "[" << milktea->name() << "]" << "\n"
        << "The cost of this order is: "
        << milktea->cost() << "\n";
}

int main() {
    std::cout << "\n";

    IMilktea* simple = new ConcreteMilktea();

    ClientCode(simple);
    std::cout << "\n";

    IMilktea* decorator1 = new MilkteaBubbles(simple);
    IMilktea* decorator2 = new MilkteaJelly(decorator1);

    ClientCode(decorator1);
    std::cout << "\n";

    ClientCode(decorator2);
    std::cout << "\n";

    //----------------------------------------------------------------
    //-newly implemented wrapper--------------------------------------
    //----------------------------------------------------------------
    // IMilktea* decoratorNew = new MilkteaToppings(decorator1);
    // ClientCode(decoratorNew);
    // std::cout << "\n";
    // delete decoratorNew;
    //----------------------------------------------------------------
    //----------------------------------------------------------------

    delete simple;
    delete decorator1;
    delete decorator2;

    return 0;
}