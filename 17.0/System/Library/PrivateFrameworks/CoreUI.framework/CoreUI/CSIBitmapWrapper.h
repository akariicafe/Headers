@class NSString, NSData;

@interface CSIBitmapWrapper : NSObject {
    struct CGContext { } *_bitmapContext;
    NSData *_pixelData;
    unsigned int _width;
    unsigned int _height;
    unsigned long long _rowbytes;
    BOOL _allowsCompactCompression;
    struct CGImage { } *_sourceImage;
    struct CGImage { } *_destImage;
    long long _texturePixelFormat;
    unsigned int _imageAlpha;
}

@property (nonatomic) unsigned int pixelFormat;
@property BOOL allowsMultiPassEncoding;
@property BOOL allowsOptimalRowbytesPacking;
@property BOOL allowsCompactCompression;
@property BOOL allowsPaletteImageCompression;
@property BOOL allowsHevcCompression;
@property BOOL allowsDeepmapImageCompression;
@property BOOL allowsDeepmap2ImageCompression;
@property (nonatomic) BOOL flipped;
@property (nonatomic) double compressionQuality;
@property long long targetPlatform;
@property long long compressionType;
@property (nonatomic) unsigned long long colorSpaceID;
@property (nonatomic) long long textureInterpretation;
@property (nonatomic) int exifOrientation;
@property (nonatomic) NSString *name;
@property (nonatomic) unsigned long long rowbytes;

- (void)dealloc;
- (unsigned int)height;
- (unsigned int)width;
- (struct CGContext { } *)bitmapContext;
- (id)initWithPixelWidth:(unsigned int)a0 pixelHeight:(unsigned int)a1;
- (unsigned int)sourceAlphaInfo;
- (id)compressedData:(BOOL)a0 usedEncoding:(int *)a1 andRowChunkSize:(unsigned int *)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 width:(unsigned int)a1 height:(unsigned int)a2 texturePixelFormat:(long long)a3;
- (id)pixelData;
- (void)setPixelData:(id)a0;
- (void)setSourceAlphaInfo:(unsigned int)a0;

@end
