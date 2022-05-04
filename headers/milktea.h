#ifndef MILKTEA_H
#define MILKTEA_H

#include <string>

class IMilktea {
    public:
        virtual ~IMilktea() {}
        virtual int cost() const = 0;
        virtual std::string name() const = 0;
};

#endif // MILKTEA_H
