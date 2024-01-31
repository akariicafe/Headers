@interface NSConstantDictionary : NSDictionary <NSFastEnumeration> {
    unsigned long long _options;
    unsigned long long _count;
    const id *_keys;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;

- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)objectEnumerator;
- (id)retain;
- (id)allValues;
- (id)init;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allKeys;
- (unsigned long long)retainCount;
- (id)keyEnumerator;
- (id)autorelease;
- (id)mutableCopy;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
