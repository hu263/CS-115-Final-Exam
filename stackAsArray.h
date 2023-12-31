#ifndef stackasarray_h
#define stackasarray_h

#include "rainfall.h"
#include "stack.h"

#include "array.h"
#include "array.cpp"

class Rainfall;

class StackAsArray : public Stack
{
    Array<Rainfall*> array;

    /** The inplementing function in the derived class 
     * Purge() deletes the elements in the container
     */
    void Purge ();

public:
    /* Constructor and Destructor */
    StackAsArray(unsigned int size);
    ~StackAsArray();
    
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