@class NSString, _PFWeakReference;

@interface _PFArray : NSArray <NSCopying, NSMutableCopying, PFObjectIDCollection> {
    int _cd_rc;
    unsigned int _count;
    id *_array;
    _PFWeakReference *_weakContext;
    struct _PFArrayFlags { unsigned char shouldRetain : 1; unsigned char shouldRelease : 1; unsigned char useExtendedRelease : 1; unsigned char freeBackingArray : 1; unsigned char copyBackingArray : 1; unsigned char managedObjects : 1; unsigned int _RESERVED : 27; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (void)initialize;

- (id)retain;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (id)initWithObjects:(id *)a0 count:(unsigned int)a1 andFlags:(unsigned int)a2;
- (unsigned long long)retainCount;
- (unsigned long long)indexOfObject:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (id)initWithObjects:(id *)a0 count:(unsigned int)a1 andFlags:(unsigned int)a2 andContext:(id)a3;
- (void)getObjects:(id *)a0;
- (Class)classForCoder;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (id *)_objectsPointer;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
