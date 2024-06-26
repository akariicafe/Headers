@class NSString, NSManagedObject, NSMutableOrderedSet;

@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {
    NSManagedObject *_container;
    NSString *_key;
    NSMutableOrderedSet *_mutableOrderedSet;
}

+ (Class)classForKeyedUnarchiver;

- (void)minusSet:(id)a0;
- (id)objectEnumerator;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)set;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)sortRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingComparator:(id /* block */)a2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObjects:(const id *)a1 count:(unsigned long long)a2;
- (void)intersectSet:(id)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)intersectsSet:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)unionSet:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)sortWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (BOOL)containsObject:(id)a0;
- (id)lastObject;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)count;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeObjectsInArray:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0;
- (void)insertObjects:(id *)a0 count:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)descriptionWithLocale:(id)a0;
- (Class)classForCoder;
- (void)sortUsingComparator:(id /* block */)a0;
- (id)allObjects;
- (id)firstObject;
- (id)description;
- (BOOL)isEqualToOrderedSet:(id)a0;
- (id)array;
- (void)removeObject:(id)a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (void)exchangeObjectAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (void)addObject:(id)a0;
- (id)valueForKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (id)_orderedObjectsAndKeys;
- (id)sortedArrayWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (BOOL)_reorderObjectsToLocationsByOrderKey:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)minusOrderedSet:(id)a0;
- (void)unionOrderedSet:(id)a0;
- (id)indexesOfObjectsPassingTest:(id /* block */)a0;
- (void)moveObjectsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (id)reverseObjectEnumerator;
- (unsigned long long)indexOfObject:(id)a0 inSortedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingComparator:(id /* block */)a3;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)a0;
- (void)intersectOrderedSet:(id)a0;
- (BOOL)intersectsOrderedSet:(id)a0;
- (BOOL)isSubsetOfOrderedSet:(id)a0;
- (id)reversedOrderedSet;
- (id)initWithContainer:(id)a0 key:(id)a1 mutableOrderedSet:(id)a2;

@end
