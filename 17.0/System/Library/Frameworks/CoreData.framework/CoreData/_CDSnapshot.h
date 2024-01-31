@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { unsigned char _readOnly : 1; unsigned char _reservedFlags : 7; } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (void)_entityDeallocated;
+ (void)_invalidateStaticCaches;
+ (void)initialize;
+ (Class)classForEntity:(id)a0;
+ (unsigned int)newBatchAllocation:(id *)a0 count:(unsigned int)a1 withOwnedObjectIDs:(id *)a2;

- (id)retain;
- (unsigned long long)hash;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)mutableCopy;
- (BOOL)_tryRetain;
- (id)copy;
- (id)description;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)valueForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
