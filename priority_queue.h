#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class PriorityQueue 
{
public:
   //constructor
   PriorityQueue(int size);
   //method declarations
   void Insert(const string& customer, bool highp);
   void Remove();
   bool IsEmpty() const;
   bool IsFull() const;
   void Print() const;

private:
   int size;
   vector<string> highpq;
   vector<string> lowpq;
};


#endif