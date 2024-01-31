@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)allValues;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)allKeys;
- (void)removeAllObjects;
- (id)keys;
- (id)dictionary;
- (id)objectAtIndex:(long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)copy;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (id)valueForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
