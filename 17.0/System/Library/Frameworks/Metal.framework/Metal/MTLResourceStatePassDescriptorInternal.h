@class MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor {
    struct MTLResourceStatePassDescriptorPrivate { MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)resourceStatePassDescriptor;

- (const struct MTLResourceStatePassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)sampleBufferAttachments;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
