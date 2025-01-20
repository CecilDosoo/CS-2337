// CS 2337
// 2023 Fall
// A4
// Name: Cecil Dosoo    
// Buff-Id: 1121730
//
// Note: Add your implmentation code to the one constructor 
// and eight member functions


#include "sequence1.h"
#include <cassert>
#include <iostream>

sequence::sequence()
{
    used = 0;
    current_index = 0;
}

void sequence::start()
{
    current_index = 0;
}

void sequence::advance()
{
    assert(is_item( ));
    current_index++;
}

void sequence::insert(const value_type& entry)
{
    
    assert (size()< CAPACITY);
    if (!is_item()){
        current_index=0;}
    for (size_type i = used; i > current_index; i--){
        data[i] = data [i-1];}
    data[current_index]= entry;
    used++;
}

void sequence::attach(const value_type& entry)
{
      assert( size( ) < CAPACITY );
      if ( !is_item( ) )
         current_index = used - 1;
      for ( size_type i=used; i > current_index + 1; --i )
         data[i] = data[i-1];
      current_index++;
      data[current_index] = entry;
      used++;
}

void sequence::remove_current()
{
    assert(is_item());
    for(size_type i = current_index; i < used; i++)
        data[i] = data[i+1];
        used--;
}

sequence::size_type sequence::size() const
{
    return used;
}

bool sequence::is_item() const
{
    return (used > current_index);
}

sequence::value_type sequence::current() const
{
    assert(is_item());
    return data[current_index];
}

