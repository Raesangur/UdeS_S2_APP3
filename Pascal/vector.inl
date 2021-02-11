template<typename ItemType>
void vector<ItemType>::m_reallocate(size_t newCapacity)
{
    // Allocation du nouveau bloc de mémoire
    ItemType* newData    = new ItemType[newCapacity];
    size_t    copiedSize = std::min(newCapacity, size());
    resize(copiedSize);

    // Copie des données
    for(size_t i = 0; i < copiedSize; i++)
    {
        newData[i] = m_begin[i];
    }

    // Suppression de l'ancien bloc de mémoire
    delete[] m_begin;
    m_begin    = newData;
    m_end      = m_begin + copiedSize;
    m_capacity = newCapacity;
}

template<typename ItemType>
void vector<ItemType>::m_reallocate()
{
    m_reallocate(m_capacity == 0 ? 4 : m_capacity * 2);
}

template<typename ItemType>
void vector<ItemType>::m_removeElements(Iterator itBegin, Iterator itEnd)
{
    for(Iterator it = itBegin; it < itEnd; it++)
    {
        it->~ItemType();
    }
}

/*********************************************************************************************/
/* Constructors ---------------------------------------------------------------------------- */
template<typename ItemType>
vector<ItemType>::vector(size_t count)
{
    m_reallocate(count);
    resize(count);
}

// Vecteur avec sa taille et assigne value a tous ses éléments
template<typename ItemType>
vector<ItemType>::vector(size_t count, const ItemType& value)
{
    m_reallocate(count);
    resize(count);
    for(Iterator i = m_begin; i < m_end; i++)
    {
        *i = value;
    }
}

// Copy constructor
template<typename ItemType>
vector<ItemType>::vector(const vector<ItemType>& other)
{
    m_reallocate(other.capacity());
    resize(other.size());

    Iterator srcI = other.begin();
    for(Iterator destI = m_begin; destI < m_end; destI++, srcI++)
    {
        *destI = *srcI;
    }
}

template<typename ItemType>
vector<ItemType>& vector<ItemType>::operator=(const vector<ItemType>& other)
{
    clear();
    m_reallocate(other.capacity());
    resize(other.size());

    Iterator srcI = other.begin();
    for(Iterator destI = m_begin; destI < m_end; destI++, srcI++)
    {
        *destI = *srcI;
    }

    return *this;
}

// Destructeur
template<typename ItemType>
vector<ItemType>::~vector()
{
    delete[] m_begin;
}


template<typename ItemType>
const ItemType& vector<ItemType>::operator[](size_t index) const
{
    if(index >= size())
    {
        throw nullptr;
    }
    return m_begin[index];
}

template<typename ItemType>
ItemType& vector<ItemType>::operator[](size_t index)
{
    if(index >= size())
    {
        throw nullptr;
    }
    return m_begin[index];
}

template<typename ItemType>
size_t vector<ItemType>::operator++()
{
    if(m_current + 1 != size())
    {
        m_current++;
    }
    return m_current;
}

template<typename ItemType>
size_t vector<ItemType>::operator--()
{
    if(m_current != 0)
    {
        m_current--;
    }
    return m_current;
}

template<typename ItemType>
void vector<ItemType>::operator<<(int shift_from_left)
{
    m_current = 0 + shift_from_left;
}

template<typename ItemType>
void vector<ItemType>::operator>>(int shift_from_right)
{
    m_current = size() - (1 + shift_from_right);
}

template<typename ItemType>
vector<ItemType>& vector<ItemType>::operator+=(ItemType value)
{
    push_back(value);
    return *this;
}


template<typename ItemType>
typename vector<ItemType>::Iterator vector<ItemType>::begin() const
{
    return m_begin;
}

template<typename ItemType>
typename vector<ItemType>::Iterator vector<ItemType>::end() const
{
    return m_end;
}

template<typename ItemType>
size_t vector<ItemType>::size() const
{
    return m_end - m_begin;
}

template<typename ItemType>
size_t vector<ItemType>::capacity() const
{
    return m_capacity;
}

template<typename ItemType>
bool vector<ItemType>::empty() const
{
    return size() == 0;
}

template<typename ItemType>
size_t vector<ItemType>::current() const
{
    return m_current;
}

template<typename ItemType>
void vector<ItemType>::current(size_t newIndex)
{
    if(newIndex < size())
    {
        m_current = newIndex;
    }
}

template<typename ItemType>
void vector<ItemType>::resize(size_t newSize)
{
    if(newSize < size())
    {
        m_removeElements(begin() + newSize, end());
    }

    m_end = m_begin + newSize;
}

template<typename ItemType>
void vector<ItemType>::reserve(size_t capacity)
{
    m_reallocate(capacity);
}

template<typename ItemType>
void vector<ItemType>::shrink_to_fit()
{
    m_reallocate(size());
}


// Appelle le destructeur sur tous les éléments
// Réinitialise la taille à 0
template<typename ItemType>
void vector<ItemType>::clear()
{
    m_removeElements(begin(), end());
    m_end = begin();
    m_current = 0;
}

template<typename ItemType>
bool vector<ItemType>::push_back(const ItemType& value)
{
    if(size() + 1 > capacity())
    {
        try
        {
            m_reallocate();
        }
        // new ne peut pas retourner null, il faut donc vérifier s'il lance une exception (du type
        // std::bad_alloc)
        catch(const std::bad_alloc&)
        {
            return false;
        }
    }

    *m_end = value;
    m_end++;
    return true;
}

template<typename ItemType>
void vector<ItemType>::pop_back()
{
    resize(size() - 1);
}

template<typename ItemType>
void vector<ItemType>::remove(size_t index)
{
    operator[](index).~ItemType();
    for(Iterator it = begin() + index; it < end() - 1; it++)
    {
        *it = *(it + 1);
    }
    m_end--;
}

template<typename ItemType>
std::ostream& operator<<(std::ostream& out, const vector<ItemType>& vec)
{
    for(ItemType& item : vec)
    {
        out << item;
    }
    return out;
}
