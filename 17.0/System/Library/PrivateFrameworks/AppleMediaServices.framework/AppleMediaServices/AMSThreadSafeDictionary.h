@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeDictionary : NSObject

@property (retain, nonatomic) AMSThreadSafeObject *backingDictionary;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (id)init;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)readWrite:(id /* block */)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKey:(id)a0;

@end
