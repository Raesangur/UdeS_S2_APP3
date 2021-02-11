/*
Nom:		Vector
Auteurs:	Pascal-Emmanuel Lachance et Anthony Royer
Date:		2021-02-11
Projet:		Vector
But:		Déclaration des méthodes et classes de Vector
*/
#ifndef VECTOR_H_
#define VECTOR_H_

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include "VisiTest.h"
#include <ios>


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
    size_t   m_cursor   = 0;

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
    [[nodiscard]]  const ItemType& operator[](size_t index) const;
    [[nodiscard]]  ItemType&       operator[](size_t index);
    // Opérateur d'ajout d'une donnée au vecteur
    ItemType&       operator+=(ItemType& item);
    // Opérateur ++
    size_t operator++();
    // Opérateur --
    size_t operator--();
    
    /*********************************************************************************************/
    /* Accesseurs ------------------------------------------------------------------------------ */
    [[nodiscard]]Iterator begin() const;
    [[nodiscard]]Iterator end() const;
    [[nodiscard]]size_t   size() const;
    [[nodiscard]]size_t   capacity() const;
    [[nodiscard]]bool     isempty() const;
    [[nodiscard]]size_t   get_cursor() const;

    /*********************************************************************************************/
    /* Modificateurs --------------------------------------------------------------------------- */
    void     resize(size_t newSize);
    void     reserve(size_t capacity);
    void     shrink_to_fit();
    void     clear();
    bool     push_back(const ItemType& value);
    void     pop_back();
    void     remove(size_t index);
    size_t   set_cursor(size_t newPos);
};

// Opérateur <<
inline std::ostream& operator<<(std::ostream& output, vector<DonneesTest> myData)
{
    for(int x = 0; x < myData.size(); x++)
    {
        output << "Type test: " << myData[x].typeTest << "\n"
               << "Adresse switches: " << myData[x].registreSW << "\n"
               << "Retour switches: " << std::hex << myData[x].retourSW << std::dec << " ("<< myData[x].retourSW << ")" <<"\n"
               << "Etat switches: " << std::hex << myData[x].etatSW << std::dec << " ("<< myData[x].etatSW << ")" << "\n"
               << "Adresse leds: " << myData[x].registreLD << "\n"
               << "Valeurs leds: " << std::hex << myData[x].valeurLD << std::dec << " (" << myData[x].valeurLD << ")" << "\n"
               << "Etat leds: " << std::hex << myData[x].etatLD << std::dec << " (" << myData[x].etatLD << ")" << "\n\n";
    }
    return output;
}

//Définitions des méthodes après leurs déclarations
#include "vector.inl"

#endif
