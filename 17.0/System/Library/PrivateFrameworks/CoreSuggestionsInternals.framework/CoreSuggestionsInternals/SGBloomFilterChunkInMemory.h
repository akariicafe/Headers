@class NSString;

@interface SGBloomFilterChunkInMemory : NSObject <SGBloomFilterChunk> {
    unsigned int _count;
    unsigned char _buf[49200];
}

@property (readonly, nonatomic) unsigned int count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)add:(union { unsigned long long x0; union { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)exists:(union { unsigned long long x0; union { unsigned int x0; unsigned int x1; } x1; })a0;

@end
