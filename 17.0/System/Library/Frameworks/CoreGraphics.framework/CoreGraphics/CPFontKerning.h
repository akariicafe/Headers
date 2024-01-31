@interface CPFontKerning : NSObject <CPDisposable> {
    struct __CFData { } *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary { } *kernDictionary;
    BOOL override;
    BOOL valid;
}

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (struct __CFDictionary { } *)createKernTable;
- (void)doTable;
- (id)initWithCGFont:(struct CGFont { } *)a0;
- (void)doKerningPair;
- (void)doOTSubtable;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doTTSubtable;
- (id)initWithKernData:(struct __CFData { } *)a0;
- (unsigned char)readByte;
- (short)readShort;
- (unsigned int)readUnsignedLong;
- (unsigned short)readUnsignedShort;

@end
