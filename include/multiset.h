#ifndef _MSET_H_
#define _MSET_H_

#include "adt.h"

#define EMPTY_SET NULL

/* Initialize the multiset data structure */
multiset create_mset(void);

/* Add an integer to the multiset */
void mset_add(multiset, void *data);

/* Remove all occurences of an integer from the multiset */
void mset_remove(multiset, void*);

/* Returns a set of all integers contained by s1 or s2 */
multiset mset_union(multiset s1, multiset s2);

/* Returns the set of all integers that are elements of s1 and s2 */
multiset mset_intersection(multiset s1, multiset s2);

/* Returns the difference of two multisets */
multiset mset_difference(multiset s1, multiset s2);

/* Return 0 if the set does not contain the value and 1 otherwise */
int mset_contains(multiset, void*);

/* Returns a new set that contains all the values of the  set passed */
multiset mset_copy(multiset);

/* Returns the number of instances of an element */
int multiplicity(multiset s, void*);

/* Return the number of distinct elements in a set */
int cardinality(multiset);

/* Return 1 if both sets contain the same elements and each has the same multiplicity */
int equivalent(multiset s1, multiset s2);

/* Free all memory allocated to the data structure */
void free_mset(multiset);

#endif