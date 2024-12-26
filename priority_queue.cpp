#include "priority_queue.h"
#include <iostream>
using namespace std;

//constructor to create queue size
PriorityQueue::PriorityQueue(int ms) 
{
    size = ms;
}
void PriorityQueue::Insert(const string& name, bool isHP) 
{
    if (IsFull()) 
    {
        cout << "priority queue is full.\n";
        return;
    }

    if (isHP) 
    {
        highpq.push_back(name);
    } else 
    {
        lowpq.push_back(name);
    }
}

void PriorityQueue::Remove() {
    if (IsEmpty()) {
        cout << "priority queue is empty.\n";
        return;
    }

    if (!highpq.empty()) {
        cout << "removing high priority customer: " << highpq.front() << "\n";
        highpq.erase(highpq.begin());
    } else if (!lowpq.empty()) {
        cout << "removing low-priority customer: " << lowpq.front() << "\n";
        lowpq.erase(lowpq.begin());
    }
}

bool PriorityQueue::IsEmpty() const {
    return highpq.empty() && lowpq.empty();
}

bool PriorityQueue::IsFull() const {
    return (highpq.size() + lowpq.size()) >= size;
}

void PriorityQueue::Print() const {
    cout << "Priority Queue:\n";

    cout << "High Priority Customers:\n";
    for (const auto& c : highpq) {
        cout << "- " << c << "\n";
    }

    cout << "Low Priority Customers:\n";
    for (const auto& c : lowpq) {
        cout << "- " << c << "\n";
    }
}