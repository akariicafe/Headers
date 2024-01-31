@class MPMediaLibrary, NSObject, MPConcreteMediaEntityPropertiesCache;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaItem : MPMediaItem <NSCopying, MPCacheableConcreteMediaEntity> {
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
    NSObject<OS_dispatch_queue> *_utilitySerialQueue;
}

@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (BOOL)supportsSecureCoding;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)a0 library:(id)a1;
+ (id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)a0 library:(id)a1;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)description;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)mediaLibrary;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)persistentID;
- (BOOL)existsInLibrary;
- (id)_initWithPersistentID:(unsigned long long)a0 library:(id)a1 propertiesCache:(id)a2;
- (id)_nonBatchableOrCachedValueForProperty:(id)a0 needsFetch:(BOOL *)a1;
- (id)_tokenBinaryIdentifierAsString;
- (id)cachedValueForProperty:(id)a0 isCached:(BOOL *)a1;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)incrementPlayCount;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)initWithPersistentID:(unsigned long long)a0 library:(id)a1;
- (void)invalidateCachedProperties;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)valuesForProperties:(id)a0;

@end
