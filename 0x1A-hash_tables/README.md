# 0x1A. C - Hash tables
> ## Foundations - Low-level programming & Algorithm ― Data structures and Algorithms


### General
#### What is a hash function
Hash function takes as input a key, which is associated with a datum or record and used to identify it to the data storage and retrieval application. The keys may be fixed length, like an integer, or variable length, like a name. In some cases, the key is the datum itself. The output is a hash code used to index a hash table holding the data or records, or pointers to them.

A hash function may be considered to perform three functions:
* Convert variable length keys into fixed length (usually machine word length or less) values, by folding them by words or other units using a parity-preserving operator like ADD or XOR.
* Scramble the bits of the key so that the resulting values are uniformly distributed over the key space.
* Map the key values into ones less than or equal to the size of the table


#### What makes a good hash function

A good hash function satisfies two basic properties: 
* it should be very fast to compute; 
* it should minimize duplication of output values (collisions). 
Hash functions rely on generating favorable probability distributions for their effectiveness, reducing access time to nearly constant.

#### What is a hash table, how do they work and how to use them

Hash functions are used in conjunction with Hash table to store and retrieve data items or data records. The hash function translates the key associated with each datum or record into a hash code which is used to index the hash table. When an item is to be added to the table, the hash code may index an empty slot (also called a bucket), in which case the item is added to the table there. If the hash code indexes a full slot, some kind of collision resolution is required: the new item may be omitted (not added to the table), or replace the old item, or it can be added to the table in some other location by a specified procedure.

#### What is a collision and what are the main ways of dealing with collisions in the context of a hash table

A collision is a situation that occurs when two distinct pieces of data have the same hash value,
Hash collisions are practically unavoidable when hashing a random subset of a large set of possible keys.
Therefore, almost all hash table implementations have some collision resolution strategy to handle such events.
#### SEPARATE CHAINING
In the method known as separate chaining, each bucket is independent, and has some sort of list of entries with the same index. The time for hash table operations is the time to find the bucket (which is constant) plus the time for the list operation.
![Alt](https://upload.wikimedia.org/wikipedia/commons/d/d0/Hash_table_5_0_1_1_1_1_1_LL.svg)

##### Separate chaining with linked lists
##### Separate chaining with list head cells

#### OPEN ADDRESSING

All entry records are stored in the bucket array itself. When a new entry has to be inserted, the buckets are examined, starting with the hashed-to slot and proceeding in some probe sequence, until an unoccupied slot is found. When searching for an entry, the buckets are scanned in the same sequence, until either the target record is found, or an unused array slot is found, which indicates that there is no such key in the table. The name "open addressing" refers to the fact that the location ("address") of the item is not determined by its hash value. (This method is also called closed hashing; it should not be confused with "open hashing" or "closed addressing" that usually mean separate chaining.)

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/b/bf/Hash_table_5_0_1_1_1_1_0_SP.svg/570px-Hash_table_5_0_1_1_1_1_0_SP.svg.png"
     alt="OPEN ADDRESING"
     width="300"
     height="300">

#### What are the advantages and drawbacks of using hash tables
##### Advantages
* The main advantage of hash tables over other table data structures is speed. This advantage is more apparent when the number of entries is large. Hash tables are particularly efficient when the maximum number of entries can be predicted in advance, so that the bucket array can be allocated once with the optimum size and never resized.
* If the set of key-value pairs is fixed and known ahead of time (so insertions and deletions are not allowed), one may reduce the average lookup cost by a careful choice of the hash function, bucket table size, and internal data structures.
#### Drawbacks
* Although operations on a hash table take constant time on average, the cost of a good hash function can be significantly higher than the inner loop of the lookup algorithm for a sequential list or search tree. Thus hash tables are not effective when the number of entries is very small
* For certain string processing applications, such as spell-checking, hash tables may be less efficient than tries, finite automata, or Judy arrays.
* The entries stored in a hash table can be enumerated efficiently (at constant cost per entry), but only in some pseudo-random order. Therefore, there is no efficient way to locate an entry whose key is nearest to a given key.
* Hash tables become quite inefficient when there are many collisions.

#### What are the most common use cases of hash tables

* Associative arrays
Hash tables are commonly used to implement many types of in-memory tables. They are used to implement associative arrays (arrays whose indices are arbitrary strings or other complicated objects), especially in interpreted programming languages like Ruby, Python, and PHP.
* Database indexing
Hash tables may also be used as disk-based data structures and database indices (such as in dbm) although B-trees are more popular in these applications.
* Caches
Hash tables can be used to implement caches, auxiliary data tables that are used to speed up the access to data that is primarily stored in slower media.
* Set
Besides recovering the entry that has a given key, many hash table implementations can also tell whether such an entry exists or not.
* Object representation
Several dynamic languages, such as Perl, Python, JavaScript, Lua, and Ruby, use hash tables to implement objects. In this representation, the keys are the names of the members and methods of the object, and the values are pointers to the corresponding member or method.
* Unique data representation
* Transposition table
