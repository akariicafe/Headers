@interface _DT_GCDAsyncSocketPreBuffer : NSObject {
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)reset;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)availableSpace;
- (unsigned long long)availableBytes;
- (char *)readBuffer;
- (void)didRead:(unsigned long long)a0;
- (void)didWrite:(unsigned long long)a0;
- (void)ensureCapacityForWrite:(unsigned long long)a0;
- (void)getReadBuffer:(char **)a0 availableBytes:(unsigned long long *)a1;
- (void)getWriteBuffer:(char **)a0 availableSpace:(unsigned long long *)a1;
- (char *)writeBuffer;

@end
