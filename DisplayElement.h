//
// Created by Randy Layne on 4/4/20.
//

#ifndef OBSERVABLE_DISPLAYELEMENT_H
#define OBSERVABLE_DISPLAYELEMENT_H

#include <iostream>

class DisplayElement
{
public:
    virtual void display(std::ostream& outs) const = 0;
};

#endif //OBSERVABLE_DISPLAYELEMENT_H
