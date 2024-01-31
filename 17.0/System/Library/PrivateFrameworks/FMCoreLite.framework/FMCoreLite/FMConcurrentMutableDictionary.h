@class NSMutableDictionary, FMReadWriteLock;

@interface FMConcurrentMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)replaceObject:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)nativeDictionary;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)popObjectforKey:(id)a0;
- (id)objectForKey:(id)a0 withConstructor:(id /* block */)a1;
- (id)objectForKey:(id)a0;

@end
