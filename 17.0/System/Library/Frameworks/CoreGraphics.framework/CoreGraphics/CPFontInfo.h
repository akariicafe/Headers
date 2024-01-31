@interface CPFontInfo : NSObject <CPDisposable> {
    struct __CFData { } *fontData;
    const char *dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    BOOL valid;
}

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (float)readFloat;
- (BOOL)getDescriptor:(struct { double x0; double x1; unsigned int x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; } *)a0;
- (id)initWithFontData:(struct __CFData { } *)a0;
- (int)kernUnitsPerEm;
- (struct __CFData { } *)newKernData;
- (unsigned char)readByte;
- (int)readLong;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })readRect;
- (unsigned int)readUnsignedLong;

@end
