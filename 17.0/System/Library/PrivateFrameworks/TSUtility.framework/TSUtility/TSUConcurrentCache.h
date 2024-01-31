@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue;

- (void)unload;
- (void)addEntriesFromDictionary:(id)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)objectForKey:(id)a0;
- (BOOL)hasFlushableContent;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;

@end
