@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)init;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)keyEnumerator;
- (id)initWithContentsOfURL:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;

@end
