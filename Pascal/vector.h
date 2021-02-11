#ifndef VECTOR_H_
#define VECTOR_H_

#include <algorithm>
#include <cstddef>
#include <ostream>
#include <utility>


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
    size_t   m_current  = 0;


    /*********************************************************************************************/
    /* Méthodes privées ------------------------------------------------------------------------ */
    void m_reallocate(size_t newCapacity);
    void m_reallocate();
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
    [[nodiscard]] const ItemType& operator[](size_t index) const;
    [[nodiscard]] ItemType&       operator[](size_t index);
    size_t                        operator++();
    size_t                        operator--();
    void                          operator<<(int shift_from_left);
    void                          operator>>(int shift_from_right);
    vector&                       operator+=(ItemType value);


    /*********************************************************************************************/
    /* Accesseurs ------------------------------------------------------------------------------ */
    [[nodiscard]] Iterator begin() const;
    [[nodiscard]] Iterator end() const;
    [[nodiscard]] size_t   size() const;
    [[nodiscard]] size_t   capacity() const;
    [[nodiscard]] bool     empty() const;
    [[nodiscard]] size_t   current() const;
    void                   current(size_t newIndex);

    /*********************************************************************************************/
    /* Modificateurs --------------------------------------------------------------------------- */
    void resize(size_t newSize);
    void reserve(size_t capacity);
    void shrink_to_fit();
    void clear();
    bool push_back(const ItemType& value);
    void pop_back();
    void remove(size_t index);
};


#include "vector.inl"

#endif
