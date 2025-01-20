//  CS 2337/L
//  node class header file for singly linked list 
//  and non-member function prototypes for linked
//  list toolkit
//
//  Do not modify this file
//

#ifndef NODE_H
#define NODE_H

#include <cstdlib>

class node {
    public:
        typedef int value_type;

        // constructor
        node(value_type dt=0, node* lk=NULL) { data = dt; link = lk; }

        // member functions
        void set_data(value_type dt) { data = dt; }
        void set_link(node* lk) { link = lk; }
        value_type get_data() const { return data; }
        node* get_link() { return link; }
        const node* get_link() const { return link; }

    private:
        value_type data;    // data stored in a node
        node* link;         // pointer to another node or NULL
};

// non-member functions for linked list toolkit
void list_print(const node* head_ptr);
size_t list_length(const node* head_ptr);
void list_head_insert(node*& head_ptr, const node::value_type& entry);
void list_insert(node* previous_ptr, const node::value_type& entry);
node* list_search(node* head_ptr, const node::value_type& target);
node* list_locate(node* head_ptr, size_t position);
void list_copy(const node* source_ptr, node*& head_ptr, node*& tail_ptr);
void list_head_remove(node*& head_ptr);
void list_remove(node* previous_ptr);
void list_clear(node*& head_ptr);

// extra functions to implement
void list_move_to_first(node*& head_ptr, node* previous_ptr);
void list_move_to_last(node*& head_ptr, node* previous_ptr);

#endif
