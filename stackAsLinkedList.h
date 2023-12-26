#ifndef stackaslinkedlist_h
#define stackaslinkedlist_h

#include "rainfall.h"
#include "stack.h"

#include "linkedlist.h"
#include "linkedlist.cpp"

class Rainfall;

class StackAsLinkedList : public Stack
{
    LinkedList<Rainfall*> list;

    /** The inplementing function in the derived class 
     * Purge() deletes the elements in the container
     */
    void Purge ();

public:
    /* Constructor and Destructor */
    StackAsLinkedList();
    virtual ~StackAsLinkedList();
    
    /** Inplementing functions in the derived class
     * Top func returns the top object of the Stack.
     * Push func pushes Rainfall object into the Stack.
     * Pop func pops Rainfall object out of the Stack.
     */
    Rainfall& Top () const;
    void Push (Rainfall&);
    void Pop ();
};

#endif
