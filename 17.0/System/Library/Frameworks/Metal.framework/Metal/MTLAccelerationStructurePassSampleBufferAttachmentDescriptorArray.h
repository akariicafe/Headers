@class MTLAccelerationStructurePassSampleBufferAttachmentDescriptor;

@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray : NSObject {
    MTLAccelerationStructurePassSampleBufferAttachmentDescriptor *_sampleDescriptors[4];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)_descriptorAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFrom:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
