@class MTLAttributeDescriptorInternal;

@interface MTLAttributeDescriptorArrayInternal : MTLAttributeDescriptorArray {
    MTLAttributeDescriptorInternal *_descriptors[31];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;

@end
