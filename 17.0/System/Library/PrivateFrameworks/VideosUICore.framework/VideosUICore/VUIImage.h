@class NSURL, NSData, NSString;

@interface VUIImage : NSObject {
    struct CGImage { } *_image;
    struct CGImageSource { } *_imageSource;
    double _imageWidth;
    double _imageHeight;
    BOOL _enableCache;
    BOOL _cacheImmediately;
    NSURL *_imageURL;
    NSData *_imageData;
    NSString *_imageType;
    BOOL _imageBufferInMemory;
}

@property (readonly, nonatomic) int orientation;
@property (nonatomic) BOOL rotationEnabled;

+ (id)imageWithData:(id)a0;
+ (id)imageWithURL:(id)a0;
+ (id)imageWithPath:(id)a0 cacheImmediately:(BOOL)a1;
+ (int)exifOrientationForImageOrientation:(long long)a0;
+ (long long)imageOrientationForExifOrientation:(int)a0;
+ (id)imageWithCGImageRef:(struct CGImage { } *)a0 imageOrientation:(long long)a1 preserveAlpha:(BOOL)a2;
+ (id)imageWithCGImageRef:(struct CGImage { } *)a0 preserveAlpha:(BOOL)a1;
+ (id)imageWithPath:(id)a0;
+ (id)imageWithRotationFromPath:(id)a0;
+ (id)imageWithRotationFromURL:(id)a0;
+ (id)imageWithURL:(id)a0 cacheImmediately:(BOOL)a1;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (struct CGImage { } *)image;
- (id)initWithData:(id)a0;
- (id)imageType;
- (float)aspectRatio;
- (void).cxx_destruct;
- (BOOL)hasAlpha;
- (struct CGSize { double x0; double x1; })pixelBounds;
- (id)uiImage;
- (void)setEnableCache:(BOOL)a0;
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource { } *)a0;
- (void)_initializeCGImageWithRotation;
- (long long)_uiImageOrientation;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)enableCache;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 exifOrientation:(int)a1 preserveAlpha:(BOOL)a2;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 imageOrientation:(long long)a1 preserveAlpha:(BOOL)a2;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 preserveAlpha:(BOOL)a1;
- (id)initWithURL:(id)a0 cacheImmediately:(BOOL)a1;
- (BOOL)isImageBufferInMemory;
- (BOOL)isPowerOfTwo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestSquareRect;
- (BOOL)sourceRequiresRotation;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)a0;

@end
