@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (BOOL)_providesConcreteBacking;
- (BOOL)_allowsDirectEncoding;
- (unsigned long long)hash;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (void)getBytes:(void *)a0;
- (id)_createDispatchData;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDispatchData;

@end
