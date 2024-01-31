@class NSDictionary, NSArray, NSMutableDictionary;

@interface HMFMutableThreadSafeDictionary : NSObject <HMFMutableAssociativeCollection, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_dictionary;
}

@property (readonly, copy) NSDictionary *rawDictionarySnapshot;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

+ (id)threadSafeDictionary;

- (id)objectEnumerator;
- (void)removeObjectsForKeys:(id)a0;
- (id)init;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
