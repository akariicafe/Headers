@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_storeInfo1;
+ (id)alloc;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (void)initialize;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)_setStoreInfo1:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)_storeDeallocated;

- (id)initWithObject:(id)a0;
- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)retain;
- (id)_storeInfo1;
- (id)entityName;
- (unsigned long long)hash;
- (id)persistentStore;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)copy;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTemporaryID;
- (id)initWithPK64:(long long)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_retainedURIString;

@end
