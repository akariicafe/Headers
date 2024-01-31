@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;

- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (id)retain;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)init;
- (void)dealloc;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)autorelease;
- (BOOL)_tryRetain;
- (id)copy;
- (id)initWithData:(id)a0;
- (const void *)bytes;
- (BOOL)_isDeallocating;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (oneway void)release;
- (BOOL)_copyWillRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
