@class NSString;
@protocol MTLDevice;

@interface _MTLIOHandleCompressed : _MTLObjectWithLabel <MTLIOHandleSPI> {
    id<MTLDevice> _device;
    int _fd;
    unsigned long long _labelTraceID;
    void *_handle;
}

@property (readonly, nonatomic) unsigned long long globalTraceObjectID;
@property (readonly) unsigned int vnioID;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)length;
- (long long)decompress:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 stagingBuffer:(void *)a3 stagingBufferSize:(unsigned long long)a4;
- (unsigned long long)getHandleOffset:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 path:(const char *)a1 compressionType:(long long)a2 error:(id *)a3 uncached:(BOOL)a4;
- (long long)read:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 stagingBuffer:(void *)a3 stagingBufferSize:(unsigned long long)a4;
- (long long)read:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 stagingBuffer:(void *)a3 stagingBufferSize:(unsigned long long)a4 needsDecompress:(BOOL *)a5;
- (void *)readIntoStagingBuffer:(unsigned long long)a0 offset:(unsigned long long)a1 stagingBuffer:(void *)a2 stagingBufferSize:(unsigned long long)a3;
- (void *)readIntoStagingBuffer:(unsigned long long)a0 offset:(unsigned long long)a1 stagingBuffer:(void *)a2 stagingBufferSize:(unsigned long long)a3 needsDecompress:(BOOL *)a4;
- (unsigned long long)stagingBufferSize:(unsigned long long)a0 offset:(unsigned long long)a1;

@end
