@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int pixelFormat; } ; struct { unsigned int bits; } ; } ; } _private;
}

- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)pixelFormat;
- (void)dealloc;
- (void)setPixelFormat:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
