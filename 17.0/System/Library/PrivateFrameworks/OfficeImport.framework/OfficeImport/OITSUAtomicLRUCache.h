@interface OITSUAtomicLRUCache : OITSULRUCache

- (id)allValues;
- (id)allKeys;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
