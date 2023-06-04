# Hash Map Data Struct

HashMap is a C++ implementation of a hash map data structure using separate chaining to handle collisions. It provides efficient key-value pair operations such as insertion, retrieval, and removal.

## Features

- Insert key-value pairs into the hash map.
- Retrieve the value associated with a key.
- Update the value associated with a key.
- Remove key-value pairs from the hash map.

## Usage

### Initialization

To use the HashMap, include the necessary header files and create an instance of the HashMap class with the desired capacity:

```cpp
#include "HashMap.h"

int main() {
    // Create a hash map with a capacity of 10
    HashMap<std::string, int> myMap(10);

    // Rest of the code...
}
```

### Insertion

To insert a key-value pair into the hash map, use the `insert` method:

```cpp
myMap.insert("key", value);
```

### Retrieval

To retrieve the value associated with a key, use the `get` method:

```cpp
V value = myMap.get("key");
```

### Updating

To update the value associated with a key, simply call the `insert` method with the same key and a new value:

```cpp
myMap.insert("key", newValue);
```

### Removal

To remove a key-value pair from the hash map, use the `remove` method:

```cpp
myMap.remove("key");
```

## Hash Function

The hash map uses a default hash function provided by the `std::hash` class to map keys to indices. This function calculates the hash value based on the type of the key. If necessary, you can provide a custom hash function by modifying the `hashFunction` method in the implementation.

## License

This project is licensed under the [MIT License](LICENSE).

## Contributing

Contributions are welcome! If you find any issues or want to enhance the HashMap implementation, feel free to open a pull request or submit an issue.

## Acknowledgments

This HashMap implementation is inspired by the concept of separate chaining and various resources on hash maps.

---