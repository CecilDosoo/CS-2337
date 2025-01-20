//  CS 2337/L
//  Assignment 5
//
//  Name: Cecil Dosoo
//  Buff-ID: 1121730
//

#include "node.h"


//  Precondition: head_ptr is head pointer of a linked list
//                previous_ptr points to a node in that same linked list
//  Postcondition: the node after the node pointed to by previous_ptr is
//                 now the new head node of that same linked list
void list_move_to_first(node*& head_ptr, node* previous_ptr) {
    
    node* ptr1 = previous_ptr->get_link();
    previous_ptr-> set_link(previous_ptr->get_link()->get_link());
    ptr1 -> set_link(head_ptr);
    head_ptr = ptr1;
    
}


//  Precondition: head_ptr is head pointer of a linked list
//                previous_ptr points to a node in that same linked list
//  Postcondition: the node after the node pointed to by previous_ptr is
//                 now the last node of that same linked list
void list_move_to_last(node*& head_ptr, node* previous_ptr) {

    node*cursor;
    for(cursor=head_ptr; cursor->get_link() != NULL; cursor = cursor->get_link()) {}
    node* ptr1 = previous_ptr->get_link();
    previous_ptr -> set_link(previous_ptr->get_link()->get_link());
    ptr1->set_link(NULL);
    cursor->set_link(ptr1);

    
    
}

