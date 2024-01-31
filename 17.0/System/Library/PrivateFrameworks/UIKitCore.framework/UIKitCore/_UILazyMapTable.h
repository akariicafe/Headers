@class NSMapTable;

@interface _UILazyMapTable : NSObject {
    id /* block */ _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (void)unregisterClient:(id)a0 ofObjectForKey:(id)a1;
- (id)keys;
- (id)initWithMappingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (id)description;
- (id)keyEnumerable;
- (void).cxx_destruct;
- (id)cachedObjects;
- (id)cachedObjectEnumerable;
- (id)objectForKey:(id)a0;
- (void)registerClient:(id)a0 ofObjectForKey:(id)a1;
- (BOOL)hasCachedObjectForKey:(id)a0;

@end
