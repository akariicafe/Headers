@interface AFKBufferMemoryDescriptor : AFKMemoryDescriptor

+ (id)withManager:(id)a0 capacity:(unsigned long long)a1;
+ (id)withManager:(id)a0 capacity:(unsigned long long)a1 token:(unsigned long long)a2;

- (id)initWithManager:(id)a0 capacity:(unsigned long long)a1 token:(unsigned long long)a2;
- (int)appendBytes:(const void *)a0 withSize:(unsigned long long)a1;
- (int)assumeControlWithOffset:(unsigned long long)a0 andSize:(unsigned long long)a1;
- (void *)getBytesNoCopy:(unsigned long long)a0 withSize:(unsigned long long)a1;
- (id)initWithManager:(id)a0 capacity:(unsigned long long)a1 buffer:(BOOL)a2;
- (int)releaseControl:(BOOL)a0 withOffset:(unsigned long long)a1 andSize:(unsigned long long)a2;

@end
