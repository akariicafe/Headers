@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (id)init;
- (BOOL)isStrideDynamic;
- (unsigned long long)stepFunction;
- (void)setStride:(unsigned long long)a0;
- (unsigned long long)stepRate;
- (unsigned long long)stride;
- (void)setStepFunction:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStepRate:(unsigned long long)a0;

@end
