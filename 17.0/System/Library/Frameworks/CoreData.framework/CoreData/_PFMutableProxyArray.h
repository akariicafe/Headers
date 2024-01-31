@class NSString, _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray <PFObjectIDCollection> {
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray { } *_indicesVeneer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)indexOfObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopy;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)copy;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (id)valueForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithPFArray:(id)a0;
- (id)initWithPFArray:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
