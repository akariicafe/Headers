@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (void)unload;
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)p_objectForKey:(id)a0;
- (BOOL)hasFlushableContent;
- (void)p_addEntriesFromDictionary:(id)a0;
- (id)p_objectsForKeys:(id)a0 notFoundMarker:(id)a1;

@end
