# Type Converter Library
A powerful and safe C++ type conversion library providing cross-type assignment and conversion capabilities.
![C++](https://img.shields.io/badge/C++-17-blue.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Header-only](https://img.shields.io/badge/Header--only-Yes-brightgreen.svg)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)

If you need type conversion but don't want to write it, this library might help you!

A collection of type conversion functions for C++ that handles common scenarios:

- Basic type conversions with error checking
- String to number parsing
- Cross-type assignments
- Wide character support

- ## Usage

```cpp
#include "set.h"

int main() {
    int value;
    
    // Returns bool indicating success
    if (set(value, "123")) {
        // Use the converted value
    }
    
    // Or use the template version
    auto result = turn<int>("456");
    
    return 0;
}
