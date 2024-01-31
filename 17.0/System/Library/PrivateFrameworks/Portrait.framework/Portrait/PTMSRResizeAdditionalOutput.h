@interface PTMSRResizeAdditionalOutput : NSObject

@property struct __CVBuffer { } *pixelbuffer;
@property struct __IOSurface { } *ioSurface;
@property int sourcePyramidIndex;

- (void)dealloc;
- (id)initWithSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 colorSpace:(struct CGColorSpace { } *)a1;

@end
