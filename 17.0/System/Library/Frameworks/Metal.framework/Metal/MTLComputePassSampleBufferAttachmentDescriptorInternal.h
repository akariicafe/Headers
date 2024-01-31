@protocol MTLCounterSampleBuffer;

@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor {
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfEncoderSampleIndex; unsigned long long endOfEncoderSampleIndex; } _private;
}

- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; } *)_descriptorPrivate;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)sampleBuffer;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)a0;
- (void)setSampleBuffer:(id)a0;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)a0;
- (unsigned long long)endOfEncoderSampleIndex;
- (unsigned long long)startOfEncoderSampleIndex;

@end
