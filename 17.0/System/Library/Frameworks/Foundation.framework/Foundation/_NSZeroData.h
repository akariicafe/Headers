@interface _NSZeroData : NSData

+ (id)data;

- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_dispatchData;

@end
