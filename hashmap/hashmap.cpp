#include <iostream>
#include <list>
#include <algorithm>

// HashEntry represents a key-value pair in the hash map
template<typename K, typename V>
class HashEntry {
public:
    K key;
    V value;

    HashEntry(const K& key, const V& value) : key(key), value(value) {}
};

// HashMap class
template<typename K, typename V>
class HashMap {
private:
    // Hash table using a list of HashEntry objects
    std::list<HashEntry<K, V>>* table;
    int capacity; // Capacity of the hash table

    // Hash function to map keys to indices
    int hashFunction(const K& key) const {
        std::hash<K> hasher;
        return hasher(key) % capacity;
    }

public:
    // Constructor
    HashMap(int capacity) : capacity(capacity) {
        table = new std::list<HashEntry<K, V>>[capacity];
    }

    // Destructor
    ~HashMap() {
        delete[] table;
    }

    // Insert key-value pair into the hash map
    void insert(const K& key, const V& value) {
        int index = hashFunction(key);
        for (const auto& entry : table[index]) {
            // If the key already exists, update its value
            if (entry.key == key) {
                entry.value = value;
                return;
            }
        }

        // Key doesn't exist, create a new entry and insert it into the list
        table[index].push_back(HashEntry<K, V>(key, value));
    }

    // Get the value associated with a key
    V get(const K& key) const {
        int index = hashFunction(key);
        for (const auto& entry : table[index]) {
            // If the key is found, return its value
            if (entry.key == key) {
                return entry.value;
            }
        }
        // Key not found, return a default value (assuming V has a default constructor)
        return V();
    }

    // Remove a key-value pair from the hash map
    void remove(const K& key) {
        int index = hashFunction(key);
        auto& entries = table[index];

        // Find the key in the list and remove it
        entries.remove_if([&key](const HashEntry<K, V>& entry) { return entry.key == key; });
    }
};

// Test the HashMap implementation
int main() {
    // Create a hash map with a capacity of 10
    HashMap<std::string, int> myMap(10);

    // Insert key-value pairs
    myMap.insert("John", 25);
    myMap.insert("Emily", 30);
    myMap.insert("Tom", 40);

    // Get values using keys
    std::cout << "John's age: " << myMap.get("John") << std::endl;
    std::cout << "Emily's age: " << myMap.get("Emily") << std::endl;

    // Update a value
    myMap.insert("John", 26);

    // Remove a key-value pair
    myMap.remove("Tom");

    // Try to access a non-existent key
    std::cout << "Tom's age: " << myMap.get("Tom") << std::endl;

    return 0;
}
