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
