@class NSArray;
@protocol MTLBuffer;

@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor

@property (nonatomic) unsigned long long polygonType;
@property (weak, nonatomic) NSArray *vertexBuffers;
@property (nonatomic) unsigned long long vertexStride;
@property (weak, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long vertexFormat;
@property (weak, nonatomic) id<MTLBuffer> transformationMatrixBuffer;
@property (nonatomic) unsigned long long transformationMatrixBufferOffset;

- (void).cxx_destruct;
- (unsigned long long)primitiveType;

@end
