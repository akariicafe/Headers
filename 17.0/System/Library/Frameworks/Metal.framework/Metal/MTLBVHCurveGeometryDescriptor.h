@class NSArray;
@protocol MTLBuffer;

@interface MTLBVHCurveGeometryDescriptor : MTLBVHGeometryDescriptor

@property (weak, nonatomic) NSArray *controlPointBuffers;
@property (nonatomic) unsigned long long controlPointStride;
@property (nonatomic) unsigned long long controlPointCount;
@property (weak, nonatomic) NSArray *radiusBuffers;
@property (nonatomic) unsigned long long radiusStride;
@property (weak, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long controlPointFormat;
@property (nonatomic) unsigned long long radiusFormat;
@property (nonatomic) unsigned long long segmentControlPointCount;
@property (nonatomic) long long curveType;
@property (nonatomic) long long curveBasis;
@property (nonatomic) long long curveEndCaps;

- (void).cxx_destruct;
- (unsigned long long)primitiveType;

@end
