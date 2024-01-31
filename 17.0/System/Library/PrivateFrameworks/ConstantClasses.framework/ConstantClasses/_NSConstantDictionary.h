@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>

+ (id)alloc;

- (id)objectEnumerator;
- (id)retain;
- (unsigned long long)capacity;
- (id)allValues;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allKeys;
- (unsigned long long)retainCount;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (oneway void)release;

@end
