#include "stackAsArray.h"

StackAsArray::StackAsArray (unsigned int size) :
    array (size)
    {}

void StackAsArray::Purge ()
{
	for (unsigned int i = 0; i < count; ++i)
	    delete array [i];
    count = 0;
}

StackAsArray::~StackAsArray ()
    { Purge (); }

void StackAsArray::Push (Rainfall& rainfall)
{
    /* Flag: Your Code Here */
}

void StackAsArray::Pop ()
{
    /* Flag: Your Code Here */
}

Rainfall& StackAsArray::Top () const
{
    /* Flag: Your Code Here */
}