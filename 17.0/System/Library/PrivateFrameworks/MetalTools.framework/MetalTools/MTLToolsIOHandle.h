@class NSString;

@interface MTLToolsIOHandle : MTLToolsObject <MTLIOHandleSPI>

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
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (long long)read:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 stagingBuffer:(void *)a3 stagingBufferSize:(unsigned long long)a4;
- (long long)read:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 stagingBuffer:(void *)a3 stagingBufferSize:(unsigned long long)a4 needsDecompress:(BOOL *)a5;
- (void *)readIntoStagingBuffer:(unsigned long long)a0 offset:(unsigned long long)a1 stagingBuffer:(void *)a2 stagingBufferSize:(unsigned long long)a3;
- (void *)readIntoStagingBuffer:(unsigned long long)a0 offset:(unsigned long long)a1 stagingBuffer:(void *)a2 stagingBufferSize:(unsigned long long)a3 needsDecompress:(BOOL *)a4;
- (unsigned long long)stagingBufferSize:(unsigned long long)a0 offset:(unsigned long long)a1;

@end
