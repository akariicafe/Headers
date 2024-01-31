@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; BOOL depthWriteEnabled; NSString *label; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; } *depthStencilPrivate;

- (id)formattedDescription:(unsigned long long)a0;
- (void)setFrontFaceStencil:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isDepthWriteEnabled;
- (void)dealloc;
- (id)label;
- (void)setDepthWriteEnabled:(BOOL)a0;
- (void)setLabel:(id)a0;
- (void)setBackFaceStencil:(id)a0;
- (id)description;
- (unsigned long long)depthCompareFunction;
- (id)backFaceStencil;
- (BOOL)isEqual:(id)a0;
- (void)setDepthCompareFunction:(unsigned long long)a0;
- (id)frontFaceStencil;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
