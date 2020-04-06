//
// Created by Randy Layne on 4/4/20.
//

#ifndef OBSERVABLE_OBSERVABLE_H
#define OBSERVABLE_OBSERVABLE_H

#include <vector>
#include <functional>

class Observer;

class Observable {
public:
    /**
     * Alias for a collection of Observers
     * Final implementation may extract behavior, but for now
     * include it here
     *
     * Source for using std::reference_wrapper is https://cpppatterns.com/patterns/observer.html
     */
     using ObserverCollection = std::vector<std::reference_wrapper<Observer>>;


    // Add and remove observers
    void addObserver(Observer *observer);
    // void removeObserver(Observer* observer);

    // Call notify(*this) for each observer when something changes
    void notifyObservers();

private:
    ObserverCollection observers;
};


#endif //OBSERVABLE_OBSERVABLE_H
