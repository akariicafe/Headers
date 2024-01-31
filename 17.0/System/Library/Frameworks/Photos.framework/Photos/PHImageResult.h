@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
    BOOL _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void)setImageData:(id)a0;
- (BOOL)isDegraded;
- (id)imageData;
- (void)dealloc;
- (id)imageURL;
- (void)setIsPlaceholder:(BOOL)a0;
- (void)setDegraded:(BOOL)a0;
- (long long)uiOrientation;
- (BOOL)isDerivedFromDeferredPreview;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setImageRef:(struct CGImage { } *)a0;
- (struct CGImage { } *)imageRef;
- (BOOL)isPlaceholder;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (void)setIsDerivedFromDeferredPreview:(BOOL)a0;
- (void)setImageURL:(id)a0;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;

@end
