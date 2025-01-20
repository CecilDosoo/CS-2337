//  CS 2337/L
//  implmentation of non-member functions for
//  linked list toolkit
//
//  Do not modify this file
//

#include "node.h"
#include <cassert>
#include <iostream>

void list_print(const node* head_ptr)
{
    const node* cursor;
    for(cursor=head_ptr; cursor != NULL; cursor = cursor->get_link())
    {
        std::cout << cursor->get_data() << " ";
    }
    std::cout << std::endl;
}

size_t list_length(const node* head_ptr)
{
    const node* cursor;
    size_t count = 0;
    for (cursor = head_ptr; cursor != NULL; cursor = cursor->get_link())
        ++count;
    return count;
}

void list_head_insert(node*& head_ptr, const node::value_type& entry)
{
    head_ptr = new node(entry, head_ptr);
}

void list_insert(node* previous_ptr, const node::value_type& entry)
{
    node* insert_ptr;
    insert_ptr = new node(entry, previous_ptr->get_link());
    previous_ptr->set_link(insert_ptr);
}

void list_copy(const node* source_ptr,
               node*& head_ptr, node*& tail_ptr) {
    head_ptr = NULL;
    tail_ptr = NULL;
    if (source_ptr == NULL)
        return;
    list_head_insert(head_ptr, source_ptr->get_data());
    tail_ptr = head_ptr;
    source_ptr = source_ptr->get_link();
    while (source_ptr != NULL) {
        list_insert(tail_ptr, source_ptr->get_data());
        tail_ptr = tail_ptr->get_link();
        source_ptr = source_ptr->get_link();
    }
}

node* list_search(node* head_ptr, const node::value_type& target)
{
    node* cursor;
    for(cursor=head_ptr; cursor != NULL; cursor = cursor->get_link())
    {
        if (cursor->get_data() == target)
            return cursor;
    }
    return NULL;
}

node* list_locate(node* head_ptr, size_t position)
{
    assert(position > 0);
    node* cursor = head_ptr;
    for(size_t i = 1; (i < position) && (cursor != NULL); ++i) {
        cursor = cursor->get_link();
    }
   return cursor;
}

void list_head_remove(node*& head_ptr)
{
    node* remove_ptr = head_ptr;
    head_ptr = head_ptr->get_link();
    delete remove_ptr;
}

void list_remove(node* previous_ptr)
{
    node* remove_ptr = previous_ptr->get_link();
    previous_ptr->set_link(remove_ptr->get_link());
    delete remove_ptr;
}

void list_clear(node*& head_ptr)
{
    while (head_ptr != NULL)
        list_head_remove(head_ptr);
}
