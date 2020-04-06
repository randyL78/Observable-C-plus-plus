//
// Created by Randy Layne on 4/4/20.
//

#include "Observable.h"
#include "Observer.h"

#include <iostream>

// An Observable object allows any number of Observers to register
// with it. When a significant change has occurred to the Observable object,
// it calls notifyObservers() and each registered observer will be notified.

void Observable::addObserver(Observer *observer) {
    std::cout << "Observer added. ";
    observers.push_back(*observer);
    std::cout << "Number of Observers: " << observers.size() << "\n";
}

//void Observable::removeObserver(Observer *observer) {
    // Stub
    // Rudimentary implementation using loop
    // Final implementation using find
//}

void Observable::notifyObservers() {
    std::cout << "Number of Observers: " << observers.size() << "\n";
    for (Observer& observer : observers) {
        observer.notify(this);
    }
}


