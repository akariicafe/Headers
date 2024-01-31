@class MTLRenderPipelineColorAttachmentDescriptorInternal;

@interface MTLRenderPipelineColorAttachmentDescriptorArrayInternal : MTLRenderPipelineColorAttachmentDescriptorArray {
    MTLRenderPipelineColorAttachmentDescriptorInternal *_descriptors[8];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)_descriptorAtIndex:(unsigned long long)a0;

@end
