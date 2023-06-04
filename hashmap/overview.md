# Hash Map Overview

## What is a Hash Map?

A Hash Map, also known as a Hash Table, is a data structure that allows efficient storage, retrieval, and manipulation of key-value pairs. It provides a way to associate values with unique keys, allowing quick access to the values based on their corresponding keys.

## How does a Hash Map work?

A Hash Map internally uses an array to store the key-value pairs. To determine where to store a key-value pair in the array, a **hash function** is used. The hash function takes the key as input and converts it into an array index or a *hash code*. This process is called **hashing**.

The array index obtained from the hash code is known as the **hash bucket**. Each hash bucket can store one or more key-value pairs. If multiple pairs are stored in the same bucket, a **collision** occurs.

To handle collisions, a popular technique is called **separate chaining**. In separate chaining, each hash bucket is implemented as a linked list. When a collision occurs, the key-value pair is added to the linked list in the corresponding hash bucket.

## Key Operations of a Hash Map

### Insertion

To insert a key-value pair into a Hash Map, the following steps are typically performed:

1. Apply the hash function to the key to obtain the hash code.
2. Calculate the hash bucket (array index) from the hash code.
3. If the hash bucket is empty, create a new linked list node with the key-value pair and add it to the hash bucket.
4. If the hash bucket is not empty, iterate through the linked list and:
    - If the key already exists, update its value.
    - If the key does not exist, create a new linked list node and add it to the end of the list.

### Retrieval

To retrieve the value associated with a key from a Hash Map, the following steps are typically performed:

1. Apply the hash function to the key to obtain the hash code.
2. Calculate the hash bucket (array index) from the hash code.
3. Iterate through the linked list in the hash bucket and:
    - If the key is found, return its corresponding value.
    - If the key is not found, return an appropriate default value or indicate that the key does not exist.

### Removal

To remove a key-value pair from a Hash Map, the following steps are typically performed:

1. Apply the hash function to the key to obtain the hash code.
2. Calculate the hash bucket (array index) from the hash code.
3. Iterate through the linked list in the hash bucket and:
    - If the key is found, remove the corresponding node from the linked list.
    - If the key is not found, no action is taken.

## Advantages of Hash Maps

- **Fast Access**: Hash Maps provide fast access to values based on their keys. The time complexity for insertion, retrieval, and removal operations is usually O(1) on average.
- **Flexibility**: Hash Maps can store any type of key-value pairs, making them versatile for a wide range of applications.
- **Dynamic Sizing**: Hash Maps can dynamically resize themselves to accommodate a changing number of key-value pairs, ensuring efficient memory usage.

## Limitations of Hash Maps

- **Hash Collisions**: Hash Maps can experience collisions, where multiple keys map to the same hash bucket. Collisions can degrade performance as the linked list in a hash bucket needs to be traversed.
- **Ordering**: Hash Maps do not inherently maintain any particular order of the key-value pairs. If ordering is required, additional data structures, such as an array or linked list, need to be used in conjunction with the Hash Map.

## Use Cases for Hash Maps

Hash Maps are widely used in various scenarios, including:

- **Caching**: Hash Maps are commonly used in caching systems to store frequently accessed data, such as results of expensive computations or database queries. This helps improve performance by avoiding redundant computations or expensive database operations.
- **Dictionaries**: Hash Maps can be used to implement dictionary-like data structures, where words or keys are associated with their corresponding definitions or values.
- **Indexing**: Hash Maps are utilized in indexing and searching applications, such as full-text search engines or databases, to provide efficient lookup and retrieval of data based on specific keys.
- **Symbol Tables**: Hash Maps serve as the underlying structure for symbol tables, which are used in compilers, interpreters, and symbol management systems to store identifiers (e.g., variable names) and their associated properties.

## Conclusion

In summary, a Hash Map is a data structure that allows efficient storage, retrieval, and manipulation of key-value pairs. It uses a hash function to convert keys into array indices and handles collisions through separate chaining. Hash Maps provide fast access to values based on their keys and are commonly used in caching, dictionaries, indexing, and symbol tables. However, collisions and lack of inherent ordering are important considerations when using Hash Maps.

By leveraging the power of hashing, Hash Maps provide a versatile and efficient solution for managing and accessing data in various applications.