@class MTLRenderPassColorAttachmentDescriptorInternal, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray {
    MTLRenderPassColorAttachmentDescriptorInternal *_color_descriptors[8];
    MTLRenderPassDepthAttachmentDescriptorInternal *_depth_descriptor;
    MTLRenderPassStencilAttachmentDescriptorInternal *_stencil_descriptor;
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)_descriptorAtIndex:(unsigned long long)a0;

@end
