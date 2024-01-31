@class NSMutableArray;

@interface _PASLowValueCardinalityMutableDictionary : NSMutableDictionary {
    NSMutableArray *_objectsAndKeys;
    unsigned long long _count;
}

- (id)allValues;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)allKeysForObject:(id)a0;

@end
