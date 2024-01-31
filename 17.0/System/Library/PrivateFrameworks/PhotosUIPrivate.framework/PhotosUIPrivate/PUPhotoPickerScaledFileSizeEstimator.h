@class PHAsset;

@interface PUPhotoPickerScaledFileSizeEstimator : NSObject {
    struct CMPhotoDecompressionContainer { } *_figContainer;
}

@property (readonly, nonatomic) PHAsset *asset;

+ (BOOL)isAssetResizable:(id)a0;

- (void)dealloc;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (id)_assetURL;
- (struct CGSize { double x0; double x1; })_targetSizeForResizeDescriptor:(id)a0;
- (unsigned long long)_assetOriginalSize;
- (id)_assetUTI;
- (unsigned long long)_estimatedSizeForResizeDescriptor:(id)a0;
- (struct CMPhotoDecompressionContainer { } *)_figContainer;
- (unsigned long long)estimatedSizeForResizeDescriptor:(id)a0;
- (BOOL)wouldResizeAssetUsingResizeDescriptor:(id)a0;

@end
