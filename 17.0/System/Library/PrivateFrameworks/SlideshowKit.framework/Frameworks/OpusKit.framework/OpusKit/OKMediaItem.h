@class NSString, OKPresentation, NSURL;

@interface OKMediaItem : NSObject {
    unsigned long long _uniqueURLHash;
}

@property (nonatomic) OKPresentation *presentation;
@property (readonly, copy, nonatomic) NSString *uniqueURLNormalisedString;
@property (readonly, copy, nonatomic) NSURL *uniqueURL;

+ (BOOL)isRemote;
+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (id)resourceURL;
- (unsigned long long)hash;
- (void)dealloc;
- (id)avAsset;
- (void)invalidate;
- (id)metadata;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMediaObject:(id)a0;
- (id)mediaObject;
- (id)_resourcesDiskCacheManager;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)detectRegionsOfInterestWithCompletionHandler:(id /* block */)a0 force:(BOOL)a1 cache:(BOOL)a2 colorSpace:(id)a3;
- (id)diskCachedMetadata;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)a0;
- (BOOL)hasDiskCachedMetadata:(id *)a0;
- (BOOL)hasDiskCachedThumbnailImage:(id *)a0 forResolution:(unsigned long long)a1;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithUniqueURL:(id)a0;
- (void)invalidateDiskCachedMetadata;
- (void)invalidateDiskCachedThumbnailImages;
- (void)invalidateMemoryCachedMetadata;
- (void)invalidateMemoryCachedThumbnailImages;
- (id)memoryCachedMetadata;
- (id)memoryCachedThumbnailImageForResolution:(unsigned long long)a0;
- (id)metadataWithCompletionHandler:(id /* block */)a0 force:(BOOL)a1 cache:(BOOL)a2;
- (id)metadataWithProgress:(id /* block */)a0 error:(id *)a1;
- (id)operationWithBlock:(id /* block */)a0 completionHandlerWithObject:(id /* block */)a1;
- (id)prepareCaches:(BOOL)a0 colorSpace:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)regionsOfInterestWithColorSpace:(id)a0;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (void)setDiskCachedMetadata:(id)a0;
- (void)setDiskCachedThumbnailImage:(id)a0 forResolution:(unsigned long long)a1;
- (void)setMemoryCachedMetadata:(id)a0;
- (void)setMemoryCachedThumbnailImage:(id)a0 forResolution:(unsigned long long)a1;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3 colorSpace:(id)a4;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3 colorSpace:(id)a4 completionHandler:(id /* block */)a5 force:(BOOL)a6 cache:(BOOL)a7;
- (id)uniquePath;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)wantsMemoryCachedMetadata;
- (BOOL)wantsMemoryCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)wantsTemporaryDiskCache;

@end
