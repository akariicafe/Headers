@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {
    struct __CFBinaryHeap { } *_binaryHeap;
}

@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) id minimumObject;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)insertObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComparator:(id /* block */)a0;
- (void)enumerateObjects:(id /* block */)a0;
- (void)removeMinimumObject;

@end
