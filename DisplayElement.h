//
// Created by Randy Layne on 4/4/20.
//

#ifndef OBSERVABLE_DISPLAYELEMENT_H
#define OBSERVABLE_DISPLAYELEMENT_H

#include <iostream>

class DisplayElement
{
public:
    virtual void display(std::ostream& outs) const;
};

//inline
//std::ostream& operator<<(std::ostream& outs, const DisplayElement& prt)
//{
//    prt.display(outs);
//    return outs;
//}

#endif //OBSERVABLE_DISPLAYELEMENT_H
