@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_providesConcreteBacking;
- (id)retain;
- (void)setLength:(unsigned long long)a0;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (void *)mutableBytes;
- (BOOL)_tryRetain;
- (const void *)bytes;
- (Class)classForCoder;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
