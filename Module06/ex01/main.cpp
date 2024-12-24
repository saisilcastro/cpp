// main.cpp
#include "Serializer.h"
#include <iostream>

int main() {
    Data data = {"Lisias", 35};

    uintptr_t raw = Serializer::serialize(&data);
    Data* deserializedData = Serializer::deserialize(raw);

    if (deserializedData == &data) {
        std::cout << "Name: " << deserializedData->name << std::endl;
        std::cout << "Age : " << deserializedData->age << std::endl;
    } else {
        std::cout << "Error: Deserialized pointer does not match the original." << std::endl;
    }

    return 0;
}
