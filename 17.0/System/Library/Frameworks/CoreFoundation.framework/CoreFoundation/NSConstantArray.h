@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;

- (id)objectEnumerator;
- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)autorelease;
- (id)mutableCopy;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
