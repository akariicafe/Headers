@interface OKMediaImportedItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (void)setMediaObject:(id)a0;
- (id)mediaObject;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)diskCachedMetadata;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)a0;
- (BOOL)hasDiskCachedMetadata:(id *)a0;
- (BOOL)hasDiskCachedThumbnailImage:(id *)a0 forResolution:(unsigned long long)a1;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithImportedResourceURL:(id)a0;
- (void)invalidateDiskCachedThumbnailImages;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (void)setDiskCachedThumbnailImage:(id)a0 forResolution:(unsigned long long)a1;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)wantsMemoryCachedMetadata;
- (BOOL)wantsTemporaryDiskCache;

@end
