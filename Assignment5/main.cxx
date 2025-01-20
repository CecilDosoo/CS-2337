//  CS 2337/L
//  Assignment 5
//  Test cases
//
//  Do not modify this file
//

#include <cstdlib>
#include "node.h"

int main() {
    node* head_ptr = NULL;
    node* ptr = NULL;
    list_head_insert(head_ptr, 11);
    list_head_insert(head_ptr, 7);
    list_head_insert(head_ptr, 23);
    list_head_insert(head_ptr, 31);
    list_head_insert(head_ptr, 5);
    list_print(head_ptr);

    // test case 1
    ptr = list_search(head_ptr, 23);
    list_move_to_first(head_ptr, ptr);
    list_print(head_ptr);

    // test case 2
    ptr = list_search(head_ptr, 23);
    list_move_to_first(head_ptr, ptr);
    list_print(head_ptr);

    // test case 3
    ptr = list_search(head_ptr, 11);
    list_move_to_first(head_ptr, ptr);
    list_print(head_ptr);

    // test case 4
    ptr = list_search(head_ptr, 7);
    list_move_to_first(head_ptr, ptr);
    list_print(head_ptr);

    // test case 5
    ptr = list_search(head_ptr, 7);
    list_move_to_first(head_ptr, ptr);
    list_print(head_ptr);

    // test case 6
    ptr = list_search(head_ptr, 11);
    list_move_to_last(head_ptr, ptr);
    list_print(head_ptr);

    // test case 7
    ptr = list_search(head_ptr, 31);
    list_move_to_last(head_ptr, ptr);
    list_print(head_ptr);

    // test case 8
    ptr = list_search(head_ptr, 5);
    list_move_to_last(head_ptr, ptr);
    list_print(head_ptr);

    return 0;
}