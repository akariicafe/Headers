@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor {
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (unsigned long long)format;
- (void)setFormat:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)a0;
- (unsigned long long)bufferIndex;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
