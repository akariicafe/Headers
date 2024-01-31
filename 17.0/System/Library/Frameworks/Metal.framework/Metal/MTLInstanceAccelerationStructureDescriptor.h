@class NSArray;
@protocol MTLBuffer;

@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {
    BOOL _overriddenInstanceDescriptorStride;
    unsigned long long _instanceDescriptorStride;
}

@property (retain, nonatomic) id<MTLBuffer> instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long instanceCount;
@property (retain, nonatomic) NSArray *instancedAccelerationStructures;
@property (nonatomic) unsigned long long instanceDescriptorType;
@property (retain, nonatomic) id<MTLBuffer> motionTransformBuffer;
@property (nonatomic) unsigned long long motionTransformBufferOffset;
@property (nonatomic) unsigned long long motionTransformCount;

+ (id)descriptor;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isInstanceDescriptor;

@end
