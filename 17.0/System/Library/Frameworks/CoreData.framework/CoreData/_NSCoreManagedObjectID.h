@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)retain;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_storeInfo1;
+ (id)alloc;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (void)initialize;
+ (id)_retain_1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (long long)version;
+ (void)_setStoreInfo1:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (void)_release_1;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)_storeDeallocated;
+ (void)release;
+ (char *)generatedNameSuffix;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)retain;
- (id)_storeInfo1;
- (id)entityName;
- (unsigned long long)hash;
- (id)persistentStore;
- (unsigned long long)retainCount;
- (id)_storeIdentifier;
- (id)URIRepresentation;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTemporaryID;
- (oneway void)release;

@end
