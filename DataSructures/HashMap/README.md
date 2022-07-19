# Hash Map

## Description
  - Hash table or Hash map provides you Θ(1) aveage complexity for all the operations.
  - Hash table is a structure that can map keys to values .
  It uses a hash function to map values with the array Index .
  consider below Keys in Array **A**


|	21 |	3 |	4	| 500 |24 | 20 |19|31|112|111|
|	--- |	--- |	---	| --- |	--- |	--- |	---	| --- |---|---|

**ARRAY SIZE : 10**

We will be using a simple hash function to show you how it works 

```
Index = value % ARRAY SIZE 
```
Our hash function calculates the index on an array by doing calculating remaider using the size of the array

**Let's create it**
> Step 1
```
Index = A[0]%10
// A[0] is 21 
// Index = 1
```

|	0 |	1 |	2	| 3 |4 | 5 |6|7|8|9|
|	--- |	--- |	---	| --- |	--- |	--- |	---	| --- |---|---|
|-1|21|-1|-1|-1|-1|-1|-1|-1|-1|

Step 2 :
```
Index = A[1]%10
// A[1] is 3 
// Index = 3 HashTable[3] = 3
Similarly we can calculate other values 
For 4 it will be index 4 
For 500 it will be index 0
Fo 24 it will be index 4
For 20 it will be index 0 
For 19 it will be index 9
For 31 it will be index 1
For 112 it will be index  2
For 111 it will be index 1
```
When you will start inserting above values you will not have any issues till iserting **500**

but after **500** you have **24** whose index is **4** which is already Taken by value **4**

We call this Scenario as **Collissions** and **Collissions** are the main parameter in deciding

how god your **Hash Function** is.

> Ideal **Hash Function** should have **Zero** Collisons (Which seems to be unreachable goal)

##### Dealing with Collisons 

**Chaining**
**Open Addressing**
- Linear Probing  **Advantage Caching , Disadvantage Clustering**
- Quadratic Probing  **No clusters But bad Caching** 
- Double Hashing / Rehashing ****



## Complexity

### Time Complexity
#### Average Case 
|Access	|Search	|Insertion	|Deletion	|
|	--- |	--- |	---	| --- | 
|	N/A |	Θ(1) |	Θ(1)	| Θ(1) |

#### Worst Case

|Access	|Search	|Insertion	|Deletion|
| 	--- |	--- | 	--- |	--- |
|	N/A | 	O(n) |	O(n) | 	O(n) |

### Space Complexity
**O(n)** 
