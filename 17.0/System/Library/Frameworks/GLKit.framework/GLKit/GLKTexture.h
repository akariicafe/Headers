@class NSData, NSString;

@interface GLKTexture : NSObject {
    struct CGImageBlockSet { } *_blockSet;
    struct __CFData { } *_cfData;
    int _unpackAlignment;
    BOOL _requestIssuedForAlphaPremultiplication;
    BOOL _requestIssuedToReorientToGL;
    BOOL _requestIssuedToInterpretGrayAsAlpha;
    BOOL _requestIssuedForSRGB;
    unsigned int _primarySurfaceLength;
}

@property (readonly) NSData *imageData;
@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int bindTarget;
@property (nonatomic) unsigned int textureTarget;
@property (nonatomic) unsigned int internalFormat;
@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int type;
@property (nonatomic) int texelFormat;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned int numMipMapLevels;
@property (nonatomic) unsigned int bitsPerPixel;
@property (nonatomic) unsigned int rowBytes;
@property (nonatomic) unsigned int nComponents;
@property (nonatomic) unsigned int nPrimarySurfaces;
@property (nonatomic) unsigned int nSurfaces;
@property (nonatomic) int loadMode;
@property (nonatomic) int dataCategory;
@property (nonatomic) unsigned int index;
@property (readonly) BOOL requestIssuedForMipmapGeneration;
@property (readonly) BOOL hasPremultipliedAlpha;
@property (nonatomic) BOOL isPowerOfTwo;
@property (nonatomic) BOOL isCubeMap;
@property (nonatomic) BOOL isMipmapped;
@property (nonatomic) BOOL isVerticalFlipped;
@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) BOOL reOrient;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;
- (BOOL)_uploadToGLTexture:(unsigned int)a0 data:(id)a1 width:(int)a2 height:(int)a3 dataCategory:(int)a4 cubeMapIndex:(int)a5 mipMapIndex:(int)a6 error:(id *)a7;
- (void *)alignmentFix:(unsigned int)a0 data:(const void *)a1;
- (BOOL)canHonorSRGBrequest;
- (BOOL)decodeCGImage:(struct CGImage { } *)a0;
- (BOOL)decodeCGImageDataProvider:(struct CGImage { } *)a0;
- (BOOL)decodeCGImageImageProvider:(struct CGImage { } *)a0 CGImageProvider:(struct CGImageProvider { } *)a1;
- (BOOL)determineCGImageBlockFormatWithComponentType:(int)a0 andPixelSize:(unsigned long long)a1 andColorModel:(int)a2;
- (BOOL)determinePVRFormat:(unsigned int)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 forceCubeMap:(BOOL)a1 wasCubeMap:(BOOL *)a2 cubeMapIndex:(int)a3 options:(id)a4 error:(id *)a5;
- (id)initWithData:(id)a0 forceCubeMap:(BOOL)a1 wasCubeMap:(BOOL *)a2 cubeMapIndex:(int)a3 options:(id)a4 error:(id *)a5;
- (id)initWithDecodedData:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 rowBytes:(unsigned int)a3 texture:(id)a4 cubeMapIndex:(int)a5 options:(id)a6 error:(id *)a7;
- (BOOL)loadCGImage:(struct CGImage { } *)a0 options:(id)a1 error:(id *)a2;
- (BOOL)loadPVRTCData:(id)a0 error:(id *)a1;
- (BOOL)loadWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)premultiplyWithAlpha:(void *)a0 source:(void *)a1 withWidth:(unsigned int)a2 withHeight:(unsigned int)a3 withRowBytes:(unsigned int)a4 error:(id *)a5;
- (BOOL)reorientToGL:(void *)a0 source:(void *)a1 withWidth:(unsigned int)a2 withHeight:(unsigned int)a3 withRowBytes:(unsigned int)a4 error:(id *)a5;
- (BOOL)shouldApplyPremultiplication;
- (BOOL)shouldApplyReorientToGL;
- (void)updateRequestedOperationsFromOptions:(id)a0;
- (BOOL)uploadToGLTexture:(unsigned int)a0 error:(id *)a1;

@end
