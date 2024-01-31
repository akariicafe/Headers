@protocol MTLBuffer;

@interface MTLIndirectInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {
    BOOL _overriddenInstanceDescriptorStride;
    unsigned long long _instanceDescriptorStride;
}

@property (retain, nonatomic) id<MTLBuffer> instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long maxInstanceCount;
@property (retain, nonatomic) id<MTLBuffer> instanceCountBuffer;
@property (nonatomic) unsigned long long instanceCountBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorType;
@property (retain, nonatomic) id<MTLBuffer> motionTransformBuffer;
@property (nonatomic) unsigned long long motionTransformBufferOffset;
@property (nonatomic) unsigned long long maxMotionTransformCount;
@property (retain, nonatomic) id<MTLBuffer> motionTransformCountBuffer;
@property (nonatomic) unsigned long long motionTransformCountBufferOffset;

+ (id)descriptor;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isInstanceDescriptor;

@end
