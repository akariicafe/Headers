@class NSArray;

@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor

@property (weak, nonatomic) NSArray *boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxStride;

- (void).cxx_destruct;
- (unsigned long long)primitiveType;

@end
