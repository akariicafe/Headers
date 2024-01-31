@interface __NSPlaceholderArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (id)init;
- (void)dealloc;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)retainCount;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)_initByAdoptingBuffer:(id *)a0 count:(unsigned long long)a1 size:(unsigned long long)a2;
- (id)initWithArray:(id)a0;
- (oneway void)release;

@end
