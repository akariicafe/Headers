@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem

@property (retain) MPMediaItem *mediaItem;

+ (BOOL)isRemote;
+ (id)scheme;
+ (id)urlForMPAsset:(id)a0;
+ (id)urlForMediaObject:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setMediaObject:(id)a0;
- (id)mediaObject;
- (id)initWithMPMediaItem:(id)a0;
- (void)_resolveAssetIfNeeded;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)wantsDiskCachedMetadata;

@end
