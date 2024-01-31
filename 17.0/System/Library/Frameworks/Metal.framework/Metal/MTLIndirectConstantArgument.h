@interface MTLIndirectConstantArgument : MTLBindingInternal {
    unsigned short _dataType;
    unsigned short _alignment;
    unsigned short _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataSize;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 locationIndex:(unsigned long long)a4 dataType:(unsigned long long)a5 pixelFormat:(unsigned long long)a6 aluType:(unsigned long long)a7 dataSize:(unsigned long long)a8 alignment:(unsigned long long)a9;
- (unsigned long long)bufferALUType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)bufferPixelFormat;

@end
