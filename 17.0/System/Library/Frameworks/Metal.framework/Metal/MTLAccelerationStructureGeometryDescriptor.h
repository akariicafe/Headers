@class NSString;
@protocol MTLBuffer;

@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id<MTLBuffer> primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataBufferOffset;
@property (nonatomic) unsigned long long primitiveDataStride;
@property (nonatomic) unsigned long long primitiveDataElementSize;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
