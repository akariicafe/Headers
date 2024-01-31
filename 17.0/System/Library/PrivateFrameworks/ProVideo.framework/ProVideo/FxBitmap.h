@interface FxBitmap : FxImage <NSCopying> {
    struct FxBitmapPriv { void *x0; unsigned long long x1; BOOL x2; } *_bitmapPriv;
}

+ (void)setGuaranteeMemoryCallback:(void /* function */ *)a0;

- (id)init;
- (void)dealloc;
- (id)initWithCopy:(id)a0;
- (void *)dataPtr;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)rowBytes;
- (void)setRowBytes:(unsigned long long)a0;
- (unsigned long long)_packedRowBytes;
- (BOOL)_ownsData;
- (void)_setOwned:(BOOL)a0;
- (void)_setOwnedDataPtr:(void *)a0;
- (BOOL)_verifyImage;
- (void *)dataPtrForPositionX:(unsigned long long)a0 Y:(unsigned long long)a1;
- (id)initWithCopy:(id)a0 andInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1;
- (id)initWithCopy:(id)a0 andInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 andRowBytes:(unsigned long long)a2;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0 andData:(void *)a1;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0 rowBytes:(unsigned long long)a1 andData:(void *)a2;

@end
