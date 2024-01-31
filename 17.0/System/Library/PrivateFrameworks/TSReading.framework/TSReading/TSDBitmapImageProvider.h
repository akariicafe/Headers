@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TSDBitmapImageProvider : TSDImageProvider {
    struct CGImageSource { } *mImageSource;
    struct CGImage { } *mImage;
    unsigned long long mImageGamut;
    struct CGSize { double width; double height; } mNaturalSize;
    long long mOrientation;
    BOOL mIsOpaque;
    BOOL mIsValid;
    unsigned long long mDPI;
    NSObject<OS_dispatch_semaphore> *mImageLock;
    long long mCheckIfValidToken;
    struct CGImage { } *mHalfSizeImage;
    struct CGImage { } *mQuarterSizeImage;
}

+ (void)initialize;
+ (struct CGImage { } *)CGImageForImageData:(id)a0;
+ (id)TSUImageForImageData:(id)a0;
+ (void)clearCacheForData:(id)a0;
+ (struct CGSize { double x0; double x1; })naturalSizeForImageData:(id)a0;
+ (id)p_cacheStringForData:(id)a0;
+ (struct CGImageSource { } *)p_newImageSourceFromCacheForData:(id)a0 withFilenameSuffix:(id)a1;
+ (struct CGImageSource { } *)p_newImageSourceFromFilePath:(id)a0;
+ (struct CGImage { } *)temporaryCGImageForImageData:(id)a0;
+ (struct CGImageSource { } *)temporaryCGImageSourceForImageData:(id)a0;

- (BOOL)isOpaque;
- (void)dealloc;
- (void)flush;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isValid;
- (long long)orientation;
- (struct CGImageSource { } *)CGImageSource;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)hasFlushableContent;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1 orLayer:(id)a2;
- (struct CGImage { } *)CGImageForNaturalSize;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0 lowQuality:(BOOL)a1;
- (void)p_loadFullSizedImageIfNecessary;
- (struct CGSize { double x0; double x1; })dpiAdjustedFillSize;
- (struct CGSize { double x0; double x1; })dpiAdjustedNaturalSize;
- (void)i_commonInit;
- (unsigned long long)imageDPI;
- (unsigned long long)imageGamut;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource { } *)a0 andImage:(struct CGImage { } *)a1;
- (void)p_loadImageMetadata;
- (struct CGImage { } *)p_loadOrCreateResampledImageWithScale:(unsigned long long)a0 andCGImage:(struct CGImage **)a1;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImageSource { } *)p_newCGImageSource;
- (struct CGImageSource { } *)p_newCGImageSourceForTemporaryUse;
- (struct CGImage { } *)p_newImageFromSource:(struct CGImageSource { } *)a0;
- (struct CGImageSource { } *)p_newImageOfSize:(struct CGSize { double x0; double x1; })a0 andWriteToCacheWithSuffix:(id)a1;
- (struct CGImage { } *)p_resampledImageOfSizeType:(int)a0;

@end
