#include <iostream>
#include <typeinfo>
#include "node.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    double th = 1.2;
    int *ith = nullptr;
    auto butt = "thing";
    auto buttbutt = 10;
    auto number = 1;
    auto not_number = "5.1p";
    auto another_number = std::stof(not_number);
    auto name = typeid(not_number).name();
    auto name2 = typeid(another_number).name();
    auto name3 = typeid(th).name();
    const std::type_info& name4 = typeid(ith);

    cout << butt << number << another_number << name4.name() << endl;

    node thing;
    thing.data = "first";
    node next = add(thing, "butt");
    node next2 = add(next, "another");
    node next3 = add(next2, "last");
    cout << next3.next->next->data << endl;
    return 0;
}