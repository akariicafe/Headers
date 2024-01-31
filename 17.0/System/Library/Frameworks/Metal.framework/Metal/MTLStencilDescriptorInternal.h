@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {
    struct MTLStencilDescriptorPrivate { unsigned long long stencilCompareFunction; unsigned long long stencilFailureOperation; unsigned long long depthFailureOperation; unsigned long long depthStencilPassOperation; unsigned int readMask; unsigned int writeMask; } _private;
}

@property (readonly) const struct MTLStencilDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *stencilPrivate;

- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (unsigned long long)hash;
- (unsigned int)writeMask;
- (void)setDepthFailureOperation:(unsigned long long)a0;
- (void)setStencilFailureOperation:(unsigned long long)a0;
- (unsigned long long)stencilFailureOperation;
- (unsigned int)readMask;
- (void)setStencilCompareFunction:(unsigned long long)a0;
- (unsigned long long)stencilCompareFunction;
- (id)description;
- (unsigned long long)depthStencilPassOperation;
- (void)setWriteMask:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDepthStencilPassOperation:(unsigned long long)a0;
- (unsigned long long)depthFailureOperation;
- (void)setReadMask:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
