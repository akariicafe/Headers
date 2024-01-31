@class NSArray, NSData, PHAsset, NSNumber;

@interface VCPMADServiceImagePhotosAsset : VCPMADServiceImageAsset {
    PHAsset *_asset;
    NSArray *_resources;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _lowResPixelBuffer;
    unsigned int _lowResOrientation;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _highResPixelBuffer;
    unsigned int _highResOrientation;
    NSArray *_documentObservations;
    NSArray *_barcodeObservations;
    NSNumber *_hasCachedParseData;
    NSData *_cachedParseData;
}

- (id)resources;
- (id)location;
- (id)faces;
- (id).cxx_construct;
- (id)identifier;
- (BOOL)isScreenshot;
- (struct CGSize { double x0; double x1; })resolution;
- (id)asset;
- (void).cxx_destruct;
- (unsigned int)orientation;
- (unsigned long long)assetType;
- (id)isSensitive;
- (id)cachedParseData;
- (id)animatedStickerScore;
- (id)barcodeObservations;
- (id)documentObservations;
- (BOOL)hasCachedParseData;
- (BOOL)hasValidSceneProcessing;
- (id)initWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
- (id)initWithPhotosAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
- (BOOL)isHighResDecoded;
- (int)loadHighResPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (int)loadLowResPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (id)nsfwClassifications;
- (void)persistOCRMRC;
- (id)scenenetClassifications;
- (void)setBarcodeObservations:(id)a0;
- (void)setCachedParseData:(id)a0 overwriteExisting:(BOOL)a1;
- (void)setDocumentObservations:(id)a0;
- (id)thumbnailResource;

@end
