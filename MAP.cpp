Hans slides gav legit ingen mening så bad chatten forklarer det meget bedre lol

In C++, "MAP" typically refers to the std::map container, which is part of the Standard Template 
Library (STL). It is an associative container that stores elements in a key-value pair format, where 
each key is unique. The std::map is implemented as a binary search tree, providing fast search, insertion, 
and deletion operations.

Here's a basic overview of how to use std::map in C++:

#include <iostream>
#include <map>

int main() {
    // Declare a std::map with int keys and string values
    std::map<int, std::string> myMap;

    // Insert elements into the map
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Orange";

    // Access and print values from the map
    std::cout << "Value at key 1: " << myMap[1] << std::endl;
    std::cout << "Value at key 2: " << myMap[2] << std::endl;

    // Check if a key exists in the map
    if (myMap.find(3) != myMap.end()) {
        std::cout << "Key 3 exists in the map." << std::endl;
    }

    // Remove an element from the map
    myMap.erase(2);

    // Iterate over the map and print all key-value pairs
    for (const auto& pair : myMap) {
        int key = pair.first;
        std::string value = pair.second;
        std::cout << "Key: " << key << ", Value: " << value << std::endl;
    }

    return 0;
}

Output:
    Value at key 1: Apple
    Value at key 2: Banana
    Key 3 exists in the map.
    Key: 1, Value: Apple
    Key: 3, Value: Orange

In this example, we create a std::map called myMap with integer keys and string values. We insert 
three key-value pairs into the map and then access and print the values at keys 1 and 2.

Next, we check if key 3 exists in the map using the find() function. If it does, we print a message.

We then remove the element with key 2 from the map using the erase() function.

Finally, we iterate over the map using a range-based for loop and print all the remaining key-value pairs.
