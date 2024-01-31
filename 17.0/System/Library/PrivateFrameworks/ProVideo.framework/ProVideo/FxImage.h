@interface FxImage : NSObject <NSCopying> {
    struct FxImagePriv { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; void /* function */ *x6; void *x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct FxRect { int x0; int x1; int x2; int x3; } x9; id x10; struct CGColorSpace *x11; int x12; unsigned long long x13; } *_imagePriv;
}

+ (id)alloc;
+ (void)setColorSpaceVendor:(void /* function */ *)a0;

- (void)setWidth:(unsigned long long)a0;
- (unsigned long long)depth;
- (id)init;
- (unsigned long long)pixelFormat;
- (void)dealloc;
- (struct CGColorSpace { } *)colorSpace;
- (void)setPixelFormat:(unsigned long long)a0;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (unsigned long long)field;
- (void)setImageType:(unsigned long long)a0;
- (unsigned long long)height;
- (void)setHeight:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (unsigned long long)version;
- (unsigned long long)size;
- (void)setOrigin:(unsigned long long)a0;
- (void)setField:(unsigned long long)a0;
- (unsigned long long)bytes;
- (unsigned long long)imageType;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)width;
- (void)setDepth:(unsigned long long)a0;
- (unsigned long long)origin;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0;
- (unsigned long long)colorInfo;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })imageInfo;
- (void)setBytes:(unsigned long long)a0;
- (void)setColorInfo:(unsigned long long)a0;
- (struct FxRect { int x0; int x1; int x2; int x3; })dod;
- (BOOL)isPremultiplied;
- (void)setPixelAspect:(double)a0;
- (int)eyeType;
- (void)setDod:(struct FxRect { int x0; int x1; int x2; int x3; })a0;
- (BOOL)_verifyImage;
- (BOOL)containsPointX:(int)a0 Y:(int)a1;
- (unsigned long long)dynamicRangeType;
- (unsigned long long)fieldOrder;
- (unsigned long long)fxColorPrimaries;
- (id)inversePixelTransform;
- (unsigned long long)nclcValue;
- (unsigned long long)numActiveChannels;
- (double)pixelAspect;
- (id)pixelTransform;
- (double)scaleX;
- (double)scaleY;
- (void)setDeallocCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)setDynamicRangeType:(unsigned long long)a0;
- (void)setEyeType:(int)a0;
- (void)setFieldOrder:(unsigned long long)a0;
- (void)setFxColorPrimaries:(unsigned long long)a0;
- (void)setIsPremultiplied:(BOOL)a0;
- (void)setNCLCValue:(unsigned long long)a0;
- (void)setNumActiveChannels:(unsigned long long)a0;
- (void)setPixelTransform:(id)a0;
- (void)setScaleX:(double)a0;
- (void)setScaleY:(double)a0;
- (void)setWidth:(unsigned long long)a0 andHeight:(unsigned long long)a1;

@end
