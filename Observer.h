//
// Created by Randy Layne on 4/4/20.
//

#ifndef OBSERVABLE_OBSERVER_H
#define OBSERVABLE_OBSERVER_H

// An Observer can register itself with any Observable object
// cell by calling the observable's addObserver() function. Subsequently,
// the observer wil be notified whenever the observer calls its
// notifyObservers() function (usually whenever the observable object's
// value has changed.
//
// Notification occurs by calling the notify() function declared here.

class Observable; // stub observable to avoid having to include the real one.

class Observer
{
public:
    virtual void notify() = 0;
};

#endif //OBSERVABLE_OBSERVER_H
