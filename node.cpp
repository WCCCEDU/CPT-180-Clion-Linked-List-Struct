//
// Created by The Messenger on 10-01-2016.
//
#include "node.h"

node add(node last_node, std::string data){
    node next;
    next.data = data;
    next.next = &last_node;
    return next;
}