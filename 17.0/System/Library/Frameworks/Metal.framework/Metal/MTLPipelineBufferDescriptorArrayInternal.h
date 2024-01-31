@class MTLPipelineBufferDescriptorInternal;

@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray {
    MTLPipelineBufferDescriptorInternal *_descriptors[31];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)_descriptorAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
