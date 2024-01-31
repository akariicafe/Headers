@class NSCachingFetchRequest, NSString, _PFArray, NSManagedObjectContext;

@interface _PFBatchFaultingArray : NSArray <PFObjectIDCollection> {
    int _cd_rc;
    unsigned int _count;
    _PFArray *_array;
    unsigned int *_entryFlags;
    NSManagedObjectContext *_moc;
    NSCachingFetchRequest *_request;
    unsigned int _batchSize;
    unsigned int *_LRUBatches;
    struct _PFBatchFaultingArrayFlags { unsigned char _LRUIndex : 8; unsigned char _uniformEntity : 1; unsigned short _LRUEntryCount : 11; unsigned short _RESERVED : 12; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (id)alloc;
+ (void)initialize;

- (id)retain;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)valueForKeyPath:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (BOOL)isEqualToArray:(id)a0;
- (unsigned long long)retainCount;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)getObjects:(id *)a0;
- (Class)classForCoder;
- (id)initWithPFArray:(id)a0 andRequest:(id)a1 andContext:(id)a2;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (id)sortedArrayUsingSelector:(SEL)a0;
- (id)valueForKey:(id)a0;
- (id)sortedArrayUsingFunction:(void /* function */ *)a0 context:(void *)a1 hint:(id)a2;
- (id)filteredArrayUsingPredicate:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)sortedArrayUsingDescriptors:(id)a0;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (oneway void)release;
- (id)sortedArrayWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)sortedArrayUsingFunction:(void /* function */ *)a0 context:(void *)a1;

@end
