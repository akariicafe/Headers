@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor {
    struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char mutability : 2; } ; struct { unsigned long long bits; } ; } ; } _private;
}

- (const struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char x0 : 2; } x0; struct { unsigned long long x0; } x1; } x0; } *)_descriptorPrivate;
- (BOOL)isDefault;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMutability:(unsigned long long)a0;
- (unsigned long long)mutability;

@end
