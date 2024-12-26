#include <iostream>
#include "priority_queue.h"
using namespace std;

int main() {
    PriorityQueue queue(5); 

    // insert customers with varying priorities
    queue.Insert("Dude", true);    // High priority
    queue.Insert("Guy", false);     // Low priority
    queue.Insert("Harold", true);  // High priority
    queue.Insert("Wilbert", false);   // Low priority
    queue.Insert("Bartholomew", true);      // High priority

    
    queue.Insert("Frank", false);   //"queue is full" error

    
    queue.Print();

    // Remove customers and print queue after each removal
    cout << "\nRemoving customers:\n";
    queue.Remove(); 
    queue.Print();

    queue.Remove(); 
    queue.Print();

    queue.Remove(); 
    queue.Print();

    queue.Remove(); 
    queue.Print();

    queue.Remove(); 
    queue.Print();

    // Attempt to remove when queue is empty
    queue.Remove(); // "queue is empty" 

    // checks to see if queue is empty after all removals
    if (queue.IsEmpty()) {
        cout << "\nQueue is now empty.\n";
    }

    // inserting more customers to check if queue becomes full
    queue.Insert("Fred", true);
    queue.Insert("Gary", false);
    queue.Insert("Patrick", true);
    queue.Insert("Boy", false);
    queue.Insert("Batman", true);

    // check fullness
    if (queue.IsFull()) 
    {
        cout << "\nQueue is now full.\n";
    }

    return 0;
}
