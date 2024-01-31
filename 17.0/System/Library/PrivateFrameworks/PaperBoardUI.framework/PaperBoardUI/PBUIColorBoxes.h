@interface PBUIColorBoxes : NSObject <NSSecureCoding> {
    struct CGSize { double width; double height; } _imageSize;
    unsigned char _totalContrast8;
    unsigned long long _downsampledBoxSize;
    unsigned long long _effectiveDownsampleFactor;
    unsigned long long _pixelHeight;
    unsigned long long _pixelWidth;
    struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *_colorBoxesRowMajor;
    unsigned long long _rowCount;
    unsigned long long _columnCount;
    unsigned long long _size;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)colorBoxesForImage:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
