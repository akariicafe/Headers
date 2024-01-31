@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (unsigned long long)arrayLength;
- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)textureType;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)access;
- (unsigned long long)dataType;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)index;
- (void)setDataType:(unsigned long long)a0;
- (id)description;
- (void)setArrayLength:(unsigned long long)a0;
- (void)setAccess:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)setTextureType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)constantBlockAlignment;
- (void)setConstantBlockAlignment:(unsigned long long)a0;

@end
