@class PHAsset;

@interface OKMediaPhotoKitItem : OKMediaItem

@property (retain) PHAsset *asset;

+ (BOOL)isRemote;
+ (id)scheme;
+ (id)cloudIdentifierForAsset:(id)a0;
+ (id)urlForMediaObject:(id)a0;
+ (id)urlForPHAsset:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setMediaObject:(id)a0;
- (id)mediaObject;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_faceAreaRect;
- (id)initWithPHAsset:(id)a0;
- (id)_fetchAssetsWithCloudIdentifiers:(id)a0 options:(id)a1;
- (void)_resolveAssetIfNeeded;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)wantsTemporaryDiskCache;

@end
