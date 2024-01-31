@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration> {
    id *_array;
    unsigned long long _size;
    id /* block */ _comparator;
    unsigned long long _mutation;
    NSMapTable *_objects;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (void)removeFirstObject;
- (id)firstObject;
- (id)description;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)check;
- (id)initWithComparator:(id /* block */)a0;
- (void)_shrink;
- (void)_moveDown:(id)a0 index:(unsigned long long)a1;
- (void)_moveUp:(id)a0 index:(unsigned long long)a1;
- (void)_moveUpOrDown:(id)a0 index:(unsigned long long)a1;
- (void)firstObjectWeightChanged;
- (void)objectWeightChanged:(id)a0;

@end
