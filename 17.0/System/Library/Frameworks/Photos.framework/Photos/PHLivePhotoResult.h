@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
    BOOL _requiresImageResult;
}

- (id)videoURL;
- (id)uniformTypeIdentifier;
- (BOOL)isDegraded;
- (id)imageData;
- (id)imageURL;
- (void)setDegraded:(BOOL)a0;
- (long long)uiOrientation;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (BOOL)isPlaceholder;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (void)addVideoResult:(id)a0;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (unsigned int)cgOrientation;
- (void)setRequiresImageResult:(BOOL)a0;
- (id)videoAdjustmentData;

@end
