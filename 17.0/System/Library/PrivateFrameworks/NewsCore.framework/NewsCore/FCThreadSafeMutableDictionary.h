@class NSArray, NSDictionary, NSMutableDictionary, NFUnfairLock;

@interface FCThreadSafeMutableDictionary : NSObject {
    NFUnfairLock *_lock;
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long count;
@property (readonly) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;
@property (readonly, copy, nonatomic) NSDictionary *readOnlyDictionary;

- (void)readWithAccessor:(id /* block */)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)readWriteWithAccessor:(id /* block */)a0;
- (id)subdictionaryForKeys:(id)a0;
- (id)objectForKey:(id)a0;
- (id)subdictionaryForKeys:(id)a0 passingTest:(id /* block */)a1;

@end
