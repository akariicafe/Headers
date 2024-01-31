@class ICCRSet, NSArray, ICCRDocument, NSString, NSMutableArray;

@interface ICCROrderedSet : NSObject <ICCRDataType, ICCRCoding>

@property (retain, nonatomic) ICCRSet *contents;
@property (retain, nonatomic) NSMutableArray *orderedArray;
@property (weak, nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)removeAllObjects;
- (void)walkGraph:(id /* block */)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)tombstone;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)realizeLocalChangesIn:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)_sort;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (void)removeObject:(id)a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (id)_indexForIndex:(unsigned long long)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;
- (void)mergeWithSet:(id)a0;
- (void)moveObject:(id)a0 toIndex:(unsigned long long)a1;

@end
