@interface MPSCPUAccelerationStructureTriangleGeometryDescriptor : MPSCPUAccelerationStructureGeometryDescriptor

@property (nonatomic) void *vertexData;
@property (nonatomic) unsigned long long vertexStride;
@property (nonatomic) void *indexData;
@property (nonatomic) unsigned int indexDataType;
@property (nonatomic) unsigned long long triangleCount;

- (id)init;

@end
