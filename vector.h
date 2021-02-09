#ifndef VECTOR_H_
#define VECTOR_H_

#include <algorithm>
#include <cstddef>
#include <iostream>


template<typename ItemType>
class vector
{
private:
    using Iterator = ItemType*;

    /*********************************************************************************************/
    /* Champs privés -------------------------------------------------------------------------- */
    Iterator m_begin    = nullptr;
    Iterator m_end      = nullptr;
    size_t   m_capacity = 0;

    /*********************************************************************************************/
    /* Méthodes privées ------------------------------------------------------------------------ */
    void m_reallocate(size_t newCapacity = m_capacity * 2);
    void m_removeElements(Iterator itBegin, Iterator itEnd);

public:
    /*********************************************************************************************/
    /* Constructeurs --------------------------------------------------------------------------- */
    vector() = default;
    vector(size_t count);

    // Vecteur avec sa taille et assigne value a tous ses éléments
    vector(size_t count, const ItemType& value);

    // Copy constructor
    vector(const vector& other);
    vector& operator=(const vector& other);

    // Move constructors
    vector(const vector&& other) = delete;
    vector& operator=(const vector&& other) = delete;

    // Destructeur
    ~vector();


    /*********************************************************************************************/
    /* Opérateurs ------------------------------------------------------------------------------ */
    // Opérateur d'indexation pour accès
    const ItemType& operator[](size_t index) const;
    ItemType&       operator[](size_t index);


    /*********************************************************************************************/
    /* Accesseurs ------------------------------------------------------------------------------ */
    Iterator begin() const;
    Iterator end() const;
    size_t   size() const;
    size_t   capacity() const;
    bool     empty() const;

    /*********************************************************************************************/
    /* Modificateurs --------------------------------------------------------------------------- */
    void     resize(size_t newSize);
    void     reserve(size_t capacity);
    void     shrink_to_fit();
    void     clear();
    bool     push_back(const ItemType& value);
    void     pop_back();
    ItemType remove(size_t index);
};


#include "vector.inl"

#endif
