#ifndef array_h
#define array_h

template <class T>
class Array
{
protected:
    T* data;
    unsigned int base;
    unsigned int length;
public:
    /* Default Constructors */
    Array ();

    /* Constructors */
    Array (unsigned int, unsigned int = 0);

    /* Destructors */
    ~Array ();

    /* Copy Constructors */
    Array (Array const&);

    /* Assignment Operator Overloading */
    Array& operator = (Array const&);

    /* [] Operator Overloading */
    T const& operator [] (unsigned int) const;
    T& operator [] (unsigned int);

    /* Getters */
    T const* Data () const;
    unsigned int Base () const;
    unsigned int Length () const;

    /* Setters */
    void SetBase (unsigned int);
    void SetLength (unsigned int);
};

#endif