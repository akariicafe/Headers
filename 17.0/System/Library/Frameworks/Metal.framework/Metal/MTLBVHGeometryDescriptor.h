@protocol MTLBuffer;

@interface MTLBVHGeometryDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long primitiveType;
@property (nonatomic) unsigned long long primitiveCount;
@property (weak, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (weak, nonatomic) id<MTLBuffer> primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataBufferOffset;
@property (nonatomic) unsigned long long primitiveDataStride;
@property (nonatomic) unsigned long long primitiveDataElementSize;

- (void).cxx_destruct;

@end
