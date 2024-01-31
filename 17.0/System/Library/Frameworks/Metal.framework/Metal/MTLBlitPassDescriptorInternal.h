@class MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor {
    struct MTLBlitPassDescriptorPrivate { MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)blitPassDescriptor;

- (const struct MTLBlitPassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)sampleBufferAttachments;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
